#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_ep = 50;
	_max_ep = 50;
	_cqc_d = 20;
	_rng_d = 15;
	_armr = 3;
	std::cout << "ScavTrap " <<_name << " has entered the game" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " left the game" << std::endl;
}

void ScavTrap::challengeNewcomer() const
{
	std::string challenges[5] =
	{
		"KYS CHALLENGE", "BINGE DRINKING", "DYSON CHALLENGE", "DONT KYS CHALLENGE", "BE HAPPY"
	};
	//ADD RANDOM SHIT
	std::cout << challenges[rand() % 5 ] << std::endl;
}