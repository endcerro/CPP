/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:45:04 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 11:49:27 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() 
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() 
{
	std::cout << "Aaargh..." << std::endl;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	return new TacticalMarine();
}
