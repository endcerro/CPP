#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:	
		FragTrap(std::string name);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const & target);
};

#endif