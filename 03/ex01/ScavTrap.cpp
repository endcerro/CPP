/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:02:02 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 12:59:15 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
_hp(100), _max_hp(100), _ep(50), _max_ep(50),
  _lvl(1), _name(name), _cqc_d(20), _rng_d(15), _armr(3)
{
	std::cout << "ScavTrap " <<_name << " has entered the game" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f) :
 _hp(f._hp), _max_hp(f._max_hp), _ep(f._ep), _max_ep(f._max_ep),
  _lvl(f._lvl), _name(f._name), _cqc_d(f._cqc_d), _rng_d(f._rng_d), _armr(f._armr)
{
	std::cout << "ScavTrap " << _name << " has entered the game by copy" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " left the game" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << _name << " attacks " << target;
	std::cout << "at range, causing " << _rng_d << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << _name << " attacks " << target;
	std::cout << " directly, causing " << _cqc_d << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amt)
{
	unsigned int damage;
	damage = (amt > _armr) ? amt - _armr : 0;
	std::cout << "SC4V-TP " <<_name << " takes a hit, causing " << damage << " dmg, hp is now ";
	_hp = (damage >= _hp) ? 0 : _hp - damage;
	std::cout << _hp << std::endl;
}
void ScavTrap::beRepaired(unsigned int amt)
{
	std::cout << "SC4V-TP " << _name << " heals for " << amt << "hp, is now ";
	_hp = (amt >= _max_hp) ? _max_hp : _hp + amt;
	std::cout << _hp << std::endl;
}
void ScavTrap::challengeNewcomer() const
{
	srand(time(NULL));
	std::string challenges[5] =
	{
		"KYS CHALLENGE", "BINGE DRINKING", "YLYL", "DONT KYS CHALLENGE", "BE HAPPY"
	};
	std::cout << challenges[rand() % 5 ] << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &f)
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