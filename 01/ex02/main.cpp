#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent event;

	Zombie michel("Michel"); //Creating Zombie on stack
	michel.announce();


	event.setZombieType("Boomer");
	event.randomChump(); //Zombie is created in stack cuz no use afterwards

	event.setZombieType("World Boss");
	Zombie *heap = event.newZombie("Mr X"); //This time it's from heap
	heap->announce();
	

	delete heap;
	return 0;
}