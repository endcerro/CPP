/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:21:12 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:20:47 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 1, name, "FR4G-TP", 30,20, 5)
{
	std::cout << "FR4G-TP " << _name << " has entered the game" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _name << " left the game" << std::endl;
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