/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:35:44 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 12:58:44 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _hp(100), _max_hp(100), _ep(100), _max_ep(100),
_lvl(1), _name(name), _cqc_d(30), _rng_d(20), _armr(5)
{
	std::cout << "FragTrap " <<_name << " has entered the game" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f) :
 _hp(f._hp), _max_hp(f._max_hp), _ep(f._ep), _max_ep(f._max_ep),
  _lvl(f._lvl), _name(f._name), _cqc_d(f._cqc_d), _rng_d(f._rng_d), _armr(f._armr)
{
	std::cout << "FragTrap " << _name << " has entered the game by copy" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name << " left the game" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << " at range, causing " << _rng_d << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << " directly, causing " << _cqc_d << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amt)
{
	unsigned int damage;
	damage = (amt > _armr) ? amt - _armr : 0;
	std::cout << "FR4G-TP " << _name << " takes a hit, causing " << damage << " dmg, hp is now ";
	_hp = (damage >= _hp) ? 0 : _hp - damage;
	std::cout << _hp << std::endl;
}
void FragTrap::beRepaired(unsigned int amt)
{
	std::cout << "FR4G-TP " << _name << " heals for " << amt << "hp, is now ";
	_hp = (amt >= _max_hp) ? _max_hp : _hp + amt;
	std::cout << _hp << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	srand(time(NULL));
	std::string moves[5] =
	{
		"M16", "M4", "M60", "MP5", "M320"
	};
	if (_ep >= 25)
	{
		std::cout << _name << " attacks " << target << " with " << moves[rand() % 5 ] << std::endl;
		_ep -= 25;
	}
	else
		std::cout << "Not enough mana" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap &f)
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