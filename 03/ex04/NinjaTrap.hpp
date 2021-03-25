#ifndef NINJATRAP_H
#define NINJATRAP_H
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class NinjaTrap : public virtual ClapTrap
{
	public:	
		NinjaTrap(std::string name);
		~NinjaTrap();
		void ninjaShoeBox(ScavTrap c) const;
		void ninjaShoeBox(ClapTrap c) const;
		void ninjaShoeBox(FragTrap c) const;
		void ninjaShoeBox(NinjaTrap c) const;
		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
};

#endif