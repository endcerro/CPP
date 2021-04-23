/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:15:02 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 14:53:27 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


int main()
{
	ClapTrap c("base");
	FragTrap f("frag");
	ScavTrap s("scav");
	NinjaTrap n("zorro");

	f.rangedAttack("Flowey");
	f.vaulthunter_dot_exe("John");

	s.challengeNewcomer();
	n.ninjaShoeBox(c);
	n.ninjaShoeBox(f);
	n.ninjaShoeBox(s);

	return 0;
}