/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:12:37 by edal--ce          #+#    #+#             */
/*   Updated: 2021/02/13 14:17:17 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}

const std::string *Weapon::getType() const
{
	return (&this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
