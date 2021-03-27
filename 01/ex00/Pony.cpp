/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:12:26 by edal              #+#    #+#             */
/*   Updated: 2021/03/27 16:43:48 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pony.hpp"
Pony::Pony(std::string n, unsigned int r, unsigned int g, unsigned int b) :_name(n), _r(r), _g(g), _b(b){}

Pony::~Pony()
{
	std::cout << "Pony " << this->_name << " has been deleted" << std::endl;
}

void Pony::present(void) const
{
	std::cout << "Name is : " << this->_name << std::endl;
	std::cout << "Color is" <<std::endl << "R : " << this->_r << std::endl;
	std::cout << "G : " << this->_g << std::endl;
	std::cout << "B : " << this->_b << std::endl;
}

Pony& Pony::operator=(const Pony &p)
{
	this->_name = p._name;
	this->_r = p._r;
	this->_g = p._g;
	this->_b = p._b;
	return *this;
}

Pony::Pony(const Pony &p) : _name(p._name), _r(p._r), _g(p._g), _b(p._b)
{
	std::cout << "Copy constructor called" << std::endl;
}