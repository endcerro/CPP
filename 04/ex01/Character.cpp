/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:24 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:10:55 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"

Character::Character(std::string const &name) : _ap(40), _map(40), _weapon(0)
{
	_name = name;
}
Character::Character(const Character &c) : _name(c._name), _ap(c._ap), _map(c._map), _weapon(c._weapon)
{}

Character::~Character() {}

void Character::equip(AWeapon *w)
{
	_weapon = w;
}

void Character::attack(Enemy *e)
{
	if (_weapon && _ap >= _weapon->getAPCost())
	{
		_ap -= _weapon->getAPCost();
		std::cout << _name << " attacks " << e->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		e->takeDamage(_weapon->getDamage());
		if (e->getHP() == 0)
			delete e;
	}
}

void Character::recoverAP(void)
{
	_ap = ((_ap + 10) > 40) ? 40 : _ap + 10;
}

int Character::getAP(void) const
{
	return _ap;
}

int Character::getMAP(void) const
{
	return _map;
}

AWeapon *Character::getWeapon(void) const
{
	return _weapon;
}

const std::string &Character::getName(void) const
{
	return _name;
}

std::ostream& operator<< (std::ostream& os, const Character &c)
{
	os << c.getName() << " has " << c.getAP() << " AP and ";
	if (c.getWeapon() != NULL)
		os << "wields a " << c.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return os;
}

Character& Character::operator=(const Character &a)
{
	this->_name = a._name;
	this->_ap = a._ap;
	this->_map = a._map;
	this->_weapon = a._weapon;
	return *this;
}
