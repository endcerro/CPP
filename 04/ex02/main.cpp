/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:21:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:40:55 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
int main()
{
	Squad delta;
	TacticalMarine *doubl = new TacticalMarine;
	delta.push(doubl);
	delta.push(new TacticalMarine);
	std::cout << "Current squad cap = " << delta.getCount() << std::endl;
	delta.push(doubl);
	std::cout << "after adding present unit = " << delta.getCount() << std::endl;
	AssaultTerminator *skynet = new AssaultTerminator;
	delta.push(skynet);
	std::cout << "after adding another unit = " << delta.getCount() << std::endl;
	
	if (delta.getUnit(delta.getCount() - 1) == skynet )
		std::cout << "unit matches"<< std::endl;
	else
		std::cout << "Uh Oh" << std::endl;


	Squad echo;
	echo = delta;

	for(int i = 0; i < delta.getCount(); i++)
	{
		delta.getUnit(i)->battleCry();
		delta.getUnit(i)->rangedAttack();
		delta.getUnit(i)->meleeAttack();
	}
	
	Squad fox;
	echo = fox;
	std::cout << "Only delta sis alive" << std::endl;
	return 0;
}