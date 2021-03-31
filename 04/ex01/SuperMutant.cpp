/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:20:23 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 11:18:44 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &s) : Enemy(s)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() 
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int a)
{
	Enemy::takeDamage(a - 3);
}

SuperMutant& SuperMutant::operator=(const SuperMutant &r)
{
	Enemy::operator=(r);
	return *this;
}