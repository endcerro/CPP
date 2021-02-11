#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

const std::string Human::identify(void) const
{
	return this->_brain.identify();
}

const Brain &Human::getBrain(void) const
{
	return (this->_brain);
}