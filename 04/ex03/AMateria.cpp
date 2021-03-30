/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:39:10 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 16:31:18 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type), _xp(0){}

AMateria::~AMateria() {}

void AMateria::use(ICharacter &target)
{
	_xp += 10;
}

unsigned int AMateria::getXP(void) const
{
	return this->_xp;
}

std::string const &AMateria::getType(void) const
{
	return _type;
}

AMateria& AMateria::operator=(const AMateria &m)
{
	// this->_xp = 
	return *this;
}