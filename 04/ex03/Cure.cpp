/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:26:50 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 17:32:59 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {}

Cure::~Cure() {}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals "<< target.getName() <<  " wounds *" << std::endl;
	AMateria::use(target);
}

AMateria *Cure::clone() const
{
	return (new Cure);
}