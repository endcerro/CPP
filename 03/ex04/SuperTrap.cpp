/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:16:57 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:20:17 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 120, 1, name, "SUPER-TP", 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SUPER-TP " <<_name << " has entered the game" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPER-TP "<< _name << " left the game" << std::endl;
}

void SuperTrap::rangedAttack(const std::string& target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string& target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::disp() const
{
	std::cout << "hp " << _hp << std::endl;
	std::cout << "ep " << _ep << std::endl;
	std::cout << "max_ep " << _max_ep << std::endl;
	std::cout << "cqc_d " << _cqc_d << std::endl;
	std::cout << "rng_d " << _rng_d << std::endl;
	std::cout << "armr " << _armr << std::endl;
	std::cout << "hp " << _hp << std::endl;
	// NinjaTrap::meleeAttack(target);
}