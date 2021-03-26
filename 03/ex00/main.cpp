/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:58:24 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 15:47:39 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap f1("Raiden");
	FragTrap f2("V");

	f2.meleeAttack("Michel");
	f1.rangedAttack("John");
	f1.vaulthunter_dot_exe("Cena");
	f1.vaulthunter_dot_exe("Cena");
	f1.vaulthunter_dot_exe("Cena");
	f1.vaulthunter_dot_exe("Cena");
	f1.vaulthunter_dot_exe("Cena");
	f1.vaulthunter_dot_exe("Cena");
	f1.vaulthunter_dot_exe("Cena");
	f1.takeDamage(800);
	return 0;
}