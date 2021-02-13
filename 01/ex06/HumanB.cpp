/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:13:05 by edal--ce          #+#    #+#             */
/*   Updated: 2021/02/13 17:08:09 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(){}
HumanB::HumanB(std::string name) : _name(name){}
HumanB::~HumanB(){}

void HumanB::attack() const
{
	std::cout << this->_name << " attacks with his ";
	std::cout << *this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}