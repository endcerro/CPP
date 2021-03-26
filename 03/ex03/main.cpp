#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	NinjaTrap yas("Yasuo");
	FragTrap f("frag");
	ClapTrap c("clap");
	yas.ninjaShoeBox(f);
	yas.ninjaShoeBox(c);
	return 0;
}