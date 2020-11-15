#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	public :
		Zombie(std::string name);
		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);
		void announce(void) const;
		void setType(std::string type);
	private :
		std::string _name;
		std::string _type;
};

#endif