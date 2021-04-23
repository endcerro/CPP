/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:14:03 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:27:38 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap f("360_NOSCOPE");
	ScavTrap s("BLYAT");
	NinjaTrap n("hasagi");
	SuperTrap chad("D.");
	ClapTrap c("basic");


	f.rangedAttack("Target");
	f.meleeAttack("Target");

	s.rangedAttack("Target");
	s.meleeAttack("Target");

	n.rangedAttack("Target");
	n.meleeAttack("Target");

	c.rangedAttack("Target");
	c.meleeAttack("Target");

	chad.rangedAttack("Target");
	chad.meleeAttack("Target");

	chad.vaulthunter_dot_exe("Cheems");
	chad.ninjaShoeBox(c);
	chad.ninjaShoeBox(n);


	return 0;
}