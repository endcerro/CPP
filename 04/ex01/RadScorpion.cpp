/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:20:23 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/29 15:53:10 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &s) : Enemy(s)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() 
{
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int a)
{
	Enemy::takeDamage(a);
}