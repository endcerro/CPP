/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:45:04 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:37:51 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() 
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &t) 
{
	(void) t;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator &t) 
{
	(void) t;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return *this;
}

AssaultTerminator::~AssaultTerminator() 
{
	std::cout << "I’ll be back..." << std::endl;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}
