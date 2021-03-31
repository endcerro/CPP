/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:41:03 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/31 10:57:16 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _amt(0)
{
	for (int i = 0; i < 4; i++)
		_mem[i] = 0;
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < 4; i++)
		delete _mem[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m != 0 && _amt < 4)
	{
		_mem[_amt++] = m->clone();
		std::cout << "leaned " << m->getType() << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_mem[i])
			std::cout << _mem[i]->getType() << std::endl;
		if (_mem[i] && _mem[i]->getType() == type)
		{
			std::cout << "found" << std::endl;
			return _mem[i]->clone();
		}
	}
	return (0);
}