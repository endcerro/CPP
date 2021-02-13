/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:13:05 by edal--ce          #+#    #+#             */
/*   Updated: 2021/02/13 17:08:07 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, const Weapon &weapon) : _name(name), _weapon(weapon){}
HumanA::~HumanA(){}

void HumanA::attack() const
{
	std::cout << this->_name << " attacks with his ";
	std::cout << *this->_weapon.getType() << std::endl;
}