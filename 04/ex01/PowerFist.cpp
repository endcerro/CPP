/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:21:36 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:57:04 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) 
{}

PowerFist::PowerFist(const PowerFist& p) : AWeapon(p)
{}

PowerFist& PowerFist::operator= (const PowerFist &b)
{
	AWeapon::operator=(b);
	return *this;
}

PowerFist::~PowerFist() {}

void PowerFist::attack(void) const 
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}