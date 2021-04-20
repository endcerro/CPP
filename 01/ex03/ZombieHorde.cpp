/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:07:57 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/19 17:07:06 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::_names[5] = 
{
	"Wilfried",
	"Jonathan", 
	"Thimotée", 
	"Paul André",
	"Sans"
};

std::string ZombieHorde::_types[5] = 
{
	"Boomer",
	"Witch", 
	"World Boss", 
	"Tank",
	"Piscine Student"
};

ZombieHorde::ZombieHorde(int n) : _ammount(n)
{
	Zombie *horde = new Zombie[n];
	this->_horde = horde;
	srand(time(NULL));
	for (int i = 0; i < this->_ammount; i++)
	{
		this->_horde[i].setName(this->_names[rand() % 5]);
		this->_horde[i].setType(this->_types[rand() % 5]);
	}
}

ZombieHorde::ZombieHorde(void)
{}

ZombieHorde::ZombieHorde(const ZombieHorde &z) : _ammount(z._ammount), _horde(z._horde)
{}

void ZombieHorde::Announce(void) const
{
	for (int i = 0; i < this->_ammount; i++)
	{
		this->_horde[i].announce();
	}
}

ZombieHorde::~ZombieHorde() 
{
	delete [] this->_horde;
}

ZombieHorde& ZombieHorde::operator= (const ZombieHorde &f)
{
	_horde = f._horde;
	_ammount = f._ammount;
	return *this;
}