/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:09:20 by edal              #+#    #+#             */
/*   Updated: 2021/02/13 17:07:53 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ZombieEvent.hpp"

std::string ZombieEvent::_names[5] = 
{
	"Wilfried",
	"Jonathan", 
	"Thimotée", 
	"Paul André",
	"Sans"
};

ZombieEvent::ZombieEvent(){}
ZombieEvent::~ZombieEvent(){}

Zombie* ZombieEvent::newZombie(std::string name) const
{
	Zombie *zomb = new Zombie(name, this->_ZombieType);
	return zomb;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_ZombieType = type;
}

void ZombieEvent::randomChump() const
{
	std::srand (time(NULL));
	Zombie zomb(this->_names[std::rand() % 5], this->_ZombieType);
	zomb.announce();
}