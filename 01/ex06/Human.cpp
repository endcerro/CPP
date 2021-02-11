#include "Human.hpp"

Human::Human(){}
Human::Human(std::string name, Weapon weapon) : _name(name), _weapon(weapon){}
Human::~Human(){}
const std::string *Human::attack() const
{
	return (this->_weapon.getType());
}