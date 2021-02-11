#ifndef HUMAN_H
#define HUMAN_H

#include "Weapon.hpp"
class Human
{
	public:
		Human();
		~Human();
		Human(std::string name, Weapon weapon);
		const std::string *attack() const;
	private :
		std::string _name;
		Weapon _weapon;
};
#endif