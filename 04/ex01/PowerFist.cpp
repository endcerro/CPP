/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:21:36 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/29 13:04:44 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) 
{
	this->_sound =  "* pschhh... SBAM! *";
}

PowerFist::PowerFist(const PowerFist& p) : AWeapon(p)
{
	this->_sound = p._sound;
}

PowerFist& PowerFist::operator= (const PowerFist &b)
{
	AWeapon::operator=(b);
	this->_sound = b._sound; 
	return *this;
}

PowerFist::~PowerFist() {}

void PowerFist::attack(void) const 
{
	std::cout << this->_sound << std::endl;
}