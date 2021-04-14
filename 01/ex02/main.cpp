/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:24:25 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/14 21:04:16 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie z("Adeline");
	Zombie z1("QUOGUE");
	z.announce();
	z1.announce();
	ZombieEvent zevent;
	zevent.setZombieType("Tiktoker");
	zevent.randomChump();
	Zombie *hz = zevent.newZombie("JOHN");
	hz->announce();	
	delete (hz);
	return 0;
}