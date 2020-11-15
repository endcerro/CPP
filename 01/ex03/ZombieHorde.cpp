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
	std::srand (time(NULL));
	for (int i = 0; i < this->_ammount; i++)
	{
		this->_horde[i].setName(this->_names[std::rand() % 5]);
		this->_horde[i].setType(this->_types[std::rand() % 5]);
	}
}

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