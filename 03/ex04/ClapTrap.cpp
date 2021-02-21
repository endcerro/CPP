#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
 _name(name), _hp(100), _max_hp(100), _ep(100), _max_ep(100),
  _lvl(1), _cqc_d(30), _rng_d(20), _armr(5)
{
	std::cout << "CL4P-TP " <<_name << " has entered the game" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP "<< _name << " left the game" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << _name << " attacks " << target;
	std::cout << "at range, causing " << _rng_d << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << _name << " attacks " << target;
	std::cout << " directly, causing " << _cqc_d << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amt)
{
	if (amt > _armr)
		_hp = (amt >= _hp + _armr) ? 0 : _hp - amt + _armr;
}
void ClapTrap::beRepaired(unsigned int amt)
{
	_hp = (amt >= _max_hp) ? _max_hp : _hp + amt;
}