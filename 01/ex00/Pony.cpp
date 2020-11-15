/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:12:26 by edal              #+#    #+#             */
/*   Updated: 2020/11/15 19:05:36 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pony.hpp"
Pony::Pony(std::string n, unsigned int r, unsigned int g, unsigned int b) :_name(n), _r(r), _g(g), _b(b){}

Pony::~Pony(){}

void Pony::present(void) const
{
	std::cout << "Name is : " << this->_name << std::endl;
	std::cout << "Color is" <<std::endl << "R : " << this->_r << std::endl;
	std::cout << "G : " << this->_g << std::endl;
	std::cout << "B : " << this->_b << std::endl;
}