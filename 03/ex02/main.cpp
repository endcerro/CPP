/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:15:02 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 15:56:56 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
	FragTrap f1("R4");
	f1.vaulthunter_dot_exe("John");
	ScavTrap s1("R3");
	s1.challengeNewcomer();
	return 0;
}