#ifndef BRAIN_H
#define BRAIN_H
#include <string>
#include <sstream> //for std::stringstream 

class Brain {

public:
	Brain(int iq = 0, int eq = 0);
	~Brain();
	std::string identify(void) const;
	int getIq(void) const;
	int getEq(void) const;

private	 :
	int _iq;
	int _eq;
};

#endif