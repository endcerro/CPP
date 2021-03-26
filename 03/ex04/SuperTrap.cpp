#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) //TODO
{
	//TODO
	_hp = FragTrap::_hp;
	_max_hp = FragTrap::_max_hp;
	_ep = NinjaTrap::_ep;
	_max_ep = NinjaTrap::_max_ep;
	_lvl = 1;
	_cqc_d = NinjaTrap::_cqc_d;
	_rng_d = FragTrap::_rng_d;
	_armr = FragTrap::_armr;
	std::cout << "S-TP " <<_name << " has entered the game" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "S-TP "<< _name << " left the game" << std::endl;
}

void SuperTrap::rangedAttack(const std::string& target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string& target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::disp() const
{
	std::cout << "hp " << _hp << std::endl;
	std::cout << "ep " << _ep << std::endl;
	std::cout << "max_ep " << _max_ep << std::endl;
	std::cout << "cqc_d " << _cqc_d << std::endl;
	std::cout << "rng_d " << _rng_d << std::endl;
	std::cout << "armr " << _armr << std::endl;
	// std::cout << "hp " << _hp << std::endl;
	// NinjaTrap::meleeAttack(target);
}