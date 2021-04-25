/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:53:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 17:07:23 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Fire.hpp"
#include "MateriaSource.hpp"
int main()
{
	Character enzo("xmg1tp");

	Character target("newb");

	Ice *i = new Ice;
	Cure *c = new Cure;

	
	std::cout << "3 Attacks, 2 of the same spell" << std::endl;
	enzo.equip(i);
	enzo.equip(c);
	enzo.equip(c);
	enzo.use(0, target);
	enzo.use(1, target);
	enzo.use(2, target);

	std::cout << "3 Attacks, new spell added" << std::endl;
	enzo.equip(c->clone());
	enzo.use(0, target);
	enzo.use(1, target);
	enzo.use(2, target);

	std::cout << "Subject test\n\n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fire());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("fire");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	delete bob;
	delete me;
	delete src;
	
	return 0;
}