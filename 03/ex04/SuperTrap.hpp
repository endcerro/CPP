#ifndef SUPERTRAP_H
#define SUPERTRAP_H
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public FragTrap, public NinjaTrap
{
	public:	
		SuperTrap(std::string name);
		~SuperTrap();
	
};

#endif