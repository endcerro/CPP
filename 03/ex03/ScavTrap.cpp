/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:19:43 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 13:50:56 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_ep = _max_ep = 50;
	_cqc_d = 20;
	_rng_d = 15;
	_armr = 3;
	_type = "SC4V-TP";
	std::cout << _type << " " <<_name << " has entered the game" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _type << " " << _name << " left the game" << std::endl;
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