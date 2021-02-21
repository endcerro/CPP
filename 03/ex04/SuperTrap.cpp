#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	// _hp = _max_hp = 60;
	// _ep = _max_ep = 120;
	// _cqc_d = 60;
	// _rng_d = 5;
	// _armr = 0;
	// std::cout << "superTrap " <<_name << " has entered the game" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "superTrap "<< _name << " left the game" << std::endl;
}