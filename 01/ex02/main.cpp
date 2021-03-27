/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:24:25 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/27 16:56:09 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent event;

	Zombie michel("Michel"); //Creating Zombie on stack
	michel.announce();

	event.setZombieType("tiktoker");
	event.randomChump();

	Zombie *heap =	event.newZombie("JOHN CENA");
	heap->announce();

	Zombie t;
	t = michel;
	// delete t;
	// event.setZombieType("Boomer");
	// event.randomChump(); //Zombie is created in stack cuz no use afterwards

	// event.setZombieType("World Boss");
	// Zombie *heap = event.newZombie("Mr X"); //This time it's from heap
	// heap->announce();
	
	delete heap;
	return 0;
}