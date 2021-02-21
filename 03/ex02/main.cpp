#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
	FragTrap f1("R4");
	f1.vaulthunter_dot_exe("John");
	ScavTrap s1("R3");
	s1.challengeNewcomer();
	return 0;
}