#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <sstream> //for std::stringstream 

class Weapon {

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string *getType(void) const;
	void setType(std::string type) const;
	
private	 :
	std::string _type;
};

#endif