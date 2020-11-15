/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:12:26 by edal              #+#    #+#             */
/*   Updated: 2020/11/15 18:31:17 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pony.hpp"
Pony::Pony() : r(0), g(0), b(0){}
Pony::Pony(std::string n, unsigned int r, unsigned int g, unsigned int b) :name(n), r(r), g(g), b(b){}

Pony::~Pony(){}

void Pony::present(void) const
{
	std::cout << "Name is : " << this->name << std::endl;
	std::cout << "Color is" <<std::endl << "R : " << this->r << std::endl;
	std::cout << "G : " << this->g << std::endl;
	std::cout << "B : " << this->b << std::endl;
}