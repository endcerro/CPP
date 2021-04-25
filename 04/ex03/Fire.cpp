/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:06:13 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 17:07:03 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fire.hpp"

Fire::Fire() : AMateria("fire") {}

Fire::~Fire() {}
Fire::Fire(const Fire &c) : AMateria(c) {}

Fire& Fire::operator=(const Fire &c)
{
	AMateria::operator=(c);
	return *this;
}

void Fire::use(ICharacter &target)
{
	std::cout << "* shoots a fireball at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

AMateria *Fire::clone() const
{
	return (new Fire(*this));
}