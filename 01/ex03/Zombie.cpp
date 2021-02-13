/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:17:50 by edal              #+#    #+#             */
/*   Updated: 2021/02/13 17:07:56 by edal--ce         ###   ########.fr       */
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