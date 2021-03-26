#ifndef NINJATRAP_H
#define NINJATRAP_H
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class NinjaTrap : public ClapTrap
{
	public:	
		NinjaTrap(std::string name);
		~NinjaTrap();
		void ninjaShoeBox(ScavTrap &c) const;
		void ninjaShoeBox(ClapTrap &c) const;
		void ninjaShoeBox(FragTrap &c) const;
		void ninjaShoeBox(NinjaTrap &c) const;
};

#endif