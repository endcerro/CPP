#include "Brain.hpp"

Brain::Brain(int iq, int eq) : _iq(iq), _eq(eq) {}
Brain::~Brain() {}

int Brain::getIq(void) const
{
	return this->_iq;
}

int Brain::getEq(void) const
{
	return this->_eq;
}

std::string Brain::identify(void) const
{
	std::stringstream stream;
	stream << this;
	return stream.str();
}