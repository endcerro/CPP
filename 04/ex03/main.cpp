/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:53:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/31 11:06:12 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
int main(int argc, char const *argv[])
{
	Character enzo("Enzo");

	Character target("TGT");

	Ice *i = new Ice;
	Cure *c = new Cure;

	Ice *ia = new Ice;
	Cure *ca = new Cure;

	Ice *ib = new Ice;
	Cure *cb = new Cure;

	// enzo.equip(i);
	// enzo.equip(ia);
	// enzo.equip(ib);
	
	// enzo.equip(c);
	// enzo.equip(ca);

	// enzo.equip(cb);


	enzo.use(0, target);
	enzo.use(1, target);
	enzo.use(2, target);
	enzo.use(3, target);
	enzo.use(4, target);
	enzo.use(5, target);
	enzo.use(6, target);

	MateriaSource m;
	m.learnMateria(i);
	m.learnMateria(c);

	enzo.equip(m.createMateria("ice"));
	enzo.equip(m.createMateria("ice"));
	enzo.equip(m.createMateria("ice"));
	enzo.equip(m.createMateria("cure"));
	enzo.use(0, target);
	enzo.use(1, target);
	enzo.use(2, target);
	enzo.use(3, target);
	
	// enzo.unequip(1);
	
	// enzo.use(0, target);
	// enzo.use(1, target);
	// enzo.use(2, target);
	// enzo.use(3, target);
	
	return 0;
}