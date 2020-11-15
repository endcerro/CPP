/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:17:50 by edal              #+#    #+#             */
/*   Updated: 2020/11/15 19:54:10 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie(std::string n) : _name(n), _type("default"){}
Zombie::Zombie(std::string n, std::string t) : _name(n), _type(t){}
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