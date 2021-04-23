/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:15:02 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 13:54:04 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
	ClapTrap c("base");
	FragTrap f("frag");
	ScavTrap s("scav");


	f.rangedAttack("Flowey");
	f.vaulthunter_dot_exe("John");

	s.challengeNewcomer();


	return 0;
}