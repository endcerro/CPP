/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:21:12 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 13:48:24 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = _max_hp = 100;
	_ep = _max_ep = 100;	
	_type = "FR4G-TP";
	_armr = 5;
	_cqc_d = 30;
	_rng_d = 20;
	std::cout << _type << " " <<_name << " has entered the game" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _type << " " << _name << " left the game" << std::endl;
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