/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:17:50 by edal              #+#    #+#             */
/*   Updated: 2021/03/27 16:55:03 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie(void){}
Zombie::Zombie(const Zombie &z) : _name(z._name), _type(z._type){}
Zombie::Zombie(std::string n) : _name(n), _type("default"){}
Zombie::Zombie(std::string n, std::string t) : _name(n), _type(t){}

Zombie::~Zombie(void)
{
	std::cout <<"<"<< this->_name << " (" <<this->_type<< ")> deleted"<<std::endl;	
}

void Zombie::announce(void) const
{
	std::cout <<"<"<< this->_name << " (" <<this->_type<< ")> Braiiiiiiinnnssss..."<<std::endl;
}

void Zombie::setType(std::string s)
{
	this->_type = s;
}

Zombie& Zombie::operator= (const Zombie &f)
{
	this->_type = f._type;
	this->_name = f._name;
	return *this;
}