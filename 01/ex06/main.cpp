#include "Weapon.hpp"
#include "Human.hpp"
#include <iostream>

int main()
{
	Weapon club = Weapon("crude spiked club");
	Human bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	// bob.attack();
	// Weapon club = Weapon("crude spiked club");
	// std::cout << club.getType();
}