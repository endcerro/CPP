#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hp = _max_hp = 60;
	_ep = _max_ep = 120;
	_cqc_d = 60;
	_rng_d = 5;
	_armr = 0;
	std::cout << "N1NJ-TRP " <<_name << " has entered the game" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "N1NJ-TRP "<< _name << " left the game" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const & target) const
{
	std::cout << "N1NJ-TRP " << _name << " attacks " << target;
	std::cout << "at range, causing " << _rng_d << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) const
{
	std::cout << "N1NJ-TRP " << _name << " attacks " << target;
	std::cout << " directly, causing " << _cqc_d << " points of damage!" << std::endl;
}

void NinjaTrap::ninjaShoeBox(ClapTrap c) const
{
	std::cout << "target locked, ClapTrap" << std::endl;
}
void NinjaTrap::ninjaShoeBox(ScavTrap s) const
{
	std::cout << "target locked, ScavTrap" << std::endl;
}
void NinjaTrap::ninjaShoeBox(FragTrap f) const
{
	std::cout << "target locked, FragTrap" << std::endl;
}
void NinjaTrap::ninjaShoeBox(NinjaTrap n) const
{
	std::cout << "target locked, NinjaTrap" << std::endl;
}