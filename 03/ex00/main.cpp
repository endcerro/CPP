/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:58:24 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 12:50:01 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap f1("Raiden");
	FragTrap f2("Dante");
	f1.meleeAttack("peon");
	f1.meleeAttack("peon");
	f1.rangedAttack("peon");
	f1.rangedAttack("peon");
	f1.vaulthunter_dot_exe("Michel");
	f1.vaulthunter_dot_exe("Michel");
	f1.vaulthunter_dot_exe("Michel");

	FragTrap f3(f1);
	f3.vaulthunter_dot_exe("Tom");
	f1.vaulthunter_dot_exe("Michel");
	
	f2 = f1;
	f2.vaulthunter_dot_exe("Nope");
	f2.takeDamage(1001);
	f2.beRepaired(500);

	return 0;
}