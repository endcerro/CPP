#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde {
	
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void Announce(void) const;
	private:
		int 	_ammount;
		Zombie 	*_horde;
		static std::string _names[5];
		static std::string _types[5];
};	


#endif