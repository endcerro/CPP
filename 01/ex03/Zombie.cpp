/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:17:50 by edal              #+#    #+#             */
/*   Updated: 2021/03/29 11:40:07 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n) : _name(n), _type("default"){}
Zombie::Zombie(std::string n, std::string t) : _name(n), _type(t){}
Zombie::Zombie(const Zombie &z) : _name(z._name), _type(z._type){}
Zombie::Zombie(void){}
Zombie::~Zombie(void){}

void Zombie::announce(void) const
{
	std::cout <<"<"<< this->_name << " (" <<this->_type<< ")> Braiiiiiiinnnssss..."<<std::endl;
}

void Zombie::setType(std::string s)
{
	this->_type = s;
}

void Zombie::setName(std::string s)
{
	this->_name = s;
}
Zombie& Zombie::operator= (const Zombie &f)
{
	this->_type = f._type;
	this->_name = f._name;
	return *this;
}