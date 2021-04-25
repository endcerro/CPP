/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:21:36 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 15:58:26 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) 
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& p) : AWeapon(p)
{}

// PlasmaRifle& PlasmaRifle::operator= (const PlasmaRifle &b)
// {
// 	AWeapon::operator=(b);
// 	return *this;
// }

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack(void) const 
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}