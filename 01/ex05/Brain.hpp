#ifndef BRAIN_H
#define BRAIN_H
#include <string>
#include <sstream> //for std::stringstream 

class Brain {

public:
	Brain();
	Brain(int iq, int eq);
	~Brain();
	std::string identify(void) const;
	int getIq(void) const;
	int getEq(void) const;

private	 :
	int _iq = 0;
	int _eq = 0;
};

#endif