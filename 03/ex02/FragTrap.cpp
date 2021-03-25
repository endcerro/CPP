#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{	
	std::cout << "FragTrap " <<_name << " has entered the game" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< _name << " left the game" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string moves[5] =
	{
		"BONK", "CONFINEMENT, THE ENNEMY KILLED HIMSELF", "m3", "m4", "m5"
	};
	//ADD RANDOM SHIT
	if (_ep > 25)
	{
		std::cout << _name << " attacks " << target << " with " << moves[(rand() + rand()) % 5 ] << std::endl;
		_ep -= 25;
	}
	else
		std::cout << "Not enough mana" << std::endl;
}