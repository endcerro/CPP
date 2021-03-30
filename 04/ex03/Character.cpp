/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:36:02 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 18:15:52 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name), _inv(0){}

Character::Character(const Character &c) : _name(c._name), _inv(c._inv)
{
	for (int i = 0; i < c._inv; i++)
		_mat[i] = c._mat[i]->clone();
}

Character& Character::operator=(const Character &c)
{
	_name = c._name;
	for (int i = 0; i < c._inv; i++)
	{
		_mat[i] = c._mat[i]->clone();
	}
	_inv = c._inv;
	return *this;
}

Character::~Character() {}

void Character::equip(AMateria *m)
{
	if (_inv < 4 && m != 0)
		_mat[_inv++] = m;
}

void Character::unequip(int idx)
{
	if (idx <= 4 && idx > 0)
		_mat[idx] = 0;
	for (int i = idx; i < 3; i++)
	{
		_mat[idx] = _mat[idx + 1];
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && _inv >= idx)
	{
		_mat[idx]->use(target);
	}
}


std::string const & Character::getName(void) const
{
	return _name;
}

