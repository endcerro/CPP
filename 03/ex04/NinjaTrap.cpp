/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:01:41 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 16:03:47 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hp = _max_hp = 60;
	_ep = _max_ep = 120;
	_cqc_d = 60;
	_rng_d = 5;
	_armr = 0;
	std::cout << "NinjaTrap " <<_name << " has entered the game" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap "<< _name << " left the game" << std::endl;
}

void NinjaTrap::ninjaShoeBox(ClapTrap &c) const
{
	std::cout << "target locked, ClapTrap" << std::endl;
}
void NinjaTrap::ninjaShoeBox(ScavTrap &s) const
{
	std::cout << "target locked, ScavTrap" << std::endl;
}
void NinjaTrap::ninjaShoeBox(FragTrap &f) const
{
	std::cout << "target locked, FragTrap" << std::endl;
}
void NinjaTrap::ninjaShoeBox(NinjaTrap &n) const
{
	std::cout << "target locked, NinjaTrap" << std::endl;
}