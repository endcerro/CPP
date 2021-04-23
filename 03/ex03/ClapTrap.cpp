/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:53:10 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:12:04 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
 _hp(100), _max_hp(100) , _ep(100), _max_ep(100),
  _lvl(1), _name(name), _type("CL4P-TP"), _cqc_d(30), _rng_d(20), _armr(5)
{
	std::cout << "CL4P-TP " <<_name << " has entered the game" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c) :
 _hp(c._hp), _max_hp(c._max_hp) , _ep(c._ep), _max_ep(c._max_ep),
  _lvl(c._lvl), _name(c._name), _cqc_d(c._cqc_d), _rng_d(c._rng_d), _armr(c._armr)
{
	std::cout << "CL4P-TP " <<_name << " has entered the game" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << _name << " left the game" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << _type << " "  << _name << " attacks " << target;
	std::cout << " at range, causing " << _rng_d << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << _type << " " << _name << " attacks " << target;
	std::cout << " directly, causing " << _cqc_d << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amt)
{
	unsigned int damage;
	damage = (amt > _armr) ? amt - _armr : 0;
	std::cout << _type << " "  <<_name << " takes a hit, causing " << damage << " dmg, hp is now ";
	_hp = (damage >= _hp) ? 0 : _hp - damage;
	std::cout << _hp << std::endl;
}
void ClapTrap::beRepaired(unsigned int amt)
{
	_hp = (amt >= _max_hp) ? _max_hp : _hp + amt;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &f)
{
	_hp = f._hp;
	_max_hp = f._max_hp;
	_ep = f._ep;
	_max_ep = f._max_ep;
	_lvl = f._lvl;
	_name = f._name;
	_cqc_d = f._cqc_d;
	_rng_d = f._rng_d;
	_armr = f._armr;
	return *this;
}