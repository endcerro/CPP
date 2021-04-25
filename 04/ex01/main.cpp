/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:26:29 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:12:59 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main()
{

	Character* me = new Character("xmg1tp");
	std::cout << *me;
	
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->attack(b);

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(c);
	me->equip(pf);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	//Super Mutant dies here
	// me->attack(c);
	
	delete pr;
	delete pf;
	delete b;
	delete me;
	return 0;
}