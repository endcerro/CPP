#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:	
		FragTrap(std::string name);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const & target);
		void rangedAttack(const std::string &target) const;
		void meleeAttack(const std::string &target) const;
};

#endif