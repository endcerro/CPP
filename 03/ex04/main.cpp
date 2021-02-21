#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap f1("R4");
	f1.vaulthunter_dot_exe("John");
	ScavTrap s1("R3");
	s1.challengeNewcomer();
	SuperTrap chad("X1");
	return 0;
}