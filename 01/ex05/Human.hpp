
#include "Brain.hpp"

class Human {
public:

	Human();
	~Human();
	std::string identify(void) const;
	const Brain &getBrain(void) const;

	private : 
	const Brain _brain;

	
};