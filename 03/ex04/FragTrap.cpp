#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{	
	std::cout << "FR4G-TP " <<_name << " has entered the game" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP "<< _name << " left the game" << std::endl;
}

void FragTrap::meleeAttack(const std::string &tgt) const
{
	std::cout << "FR4G-TP " << _name << " attacks " << tgt;
	std::cout << " directly, causing " << _cqc_d << " points of damage!" << std::endl;
}

void FragTrap::rangedAttack(const std::string &tgt) const
{
	std::cout << "FR4G-TP " << _name << " attacks " << tgt;
	std::cout << " at range, causing " << _rng_d << " points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & tgt)
{
	std::string moves[5] =
	{
		"BONK", "CONFINEMENT, THE ENNEMY KILLED HIMSELF", "m3", "m4", "m5"
	};
	//ADD RANDOM SHIT
	if (_ep > 25)
	{
		std::cout << _name << " attacks " << tgt << " with " << moves[(rand() + rand()) % 5 ] << std::endl;
		_ep -= 25;
	}
	else
		std::cout << "Not enough mana" << std::endl;
}