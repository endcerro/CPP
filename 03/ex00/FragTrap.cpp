/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:35:44 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 15:45:01 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
 _name(name), _hp(100), _max_hp(100), _ep(100), _max_ep(100),
  _lvl(1), _cqc_d(30), _rng_d(20), _armr(5)
{
	std::cout << _name << " has entered the game" << std::endl;
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
	if (amt > _armr)
		_hp = (amt >= _hp + _armr) ? 0 : _hp - amt + _armr;
}
void FragTrap::beRepaired(unsigned int amt)
{
	_hp = (amt >= _max_hp) ? _max_hp : _hp + amt;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string moves[5] =
	{
		"M16", "M4", "M60", "MP5", "M320"
	};
	//ADD RANDOM SHIT
	if (_ep > 25)
	{
		std::cout << _name << " attacks " << target << " with " << moves[(rand() + rand()) % 5 ] << std::endl;
		_ep -= 25;
	}
	else
		std::cout << "Not enough mana" << std::endl;
}