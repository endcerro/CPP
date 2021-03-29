/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:21:36 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/29 15:52:39 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) 
{
	this->_sound =  "* piouuu piouuu piouuu *";
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& p) : AWeapon(p)
{
	this->_sound = p._sound;
}

PlasmaRifle& PlasmaRifle::operator= (const PlasmaRifle &b)
{
	AWeapon::operator=(b);
	this->_sound = b._sound; 
	return *this;
}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack(void) const 
{
	std::cout << this->_sound << std::endl;
}