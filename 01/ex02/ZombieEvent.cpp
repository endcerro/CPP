/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:09:20 by edal              #+#    #+#             */
/*   Updated: 2021/04/20 15:26:35 by edal             ###   ########.fr       */
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

ZombieEvent::ZombieEvent(const ZombieEvent &z) : _ZombieType(z._ZombieType)
{}
ZombieEvent& ZombieEvent::operator= (const ZombieEvent &z)
{
	this->_ZombieType = z._ZombieType;
	return *this;
}

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