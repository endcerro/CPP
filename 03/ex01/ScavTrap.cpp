#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
 _name(name), _hp(100), _max_hp(100), _ep(50), _max_ep(50),
  _lvl(1), _cqc_d(20), _rng_d(15), _armr(3)
{
	std::cout << "ScavTrap " <<_name << " has entered the game" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " left the game" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << "at range, causing " << _rng_d << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << " directly, causing " << _cqc_d << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amt)
{
	if (amt > _armr)
		_hp = (amt >= _hp + _armr) ? 0 : _hp - amt + _armr;
}
void ScavTrap::beRepaired(unsigned int amt)
{
	_hp = (amt >= _max_hp) ? _max_hp : _hp + amt;
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