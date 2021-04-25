/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:33:02 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:26:56 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : ISquad(), _c(0), _s(0) {}

Squad::Squad(const Squad &c)
{
	_s = new ISpaceMarine *[c._c];
	for (int i = 0; i < c._c; i++)
	{
		_s[i] = c._s[i]->clone();
	}
	_c = c._c;
}

Squad::~Squad() 
{
	Squad::emptySquad();
}

int Squad::push(ISpaceMarine *m)
{	
	for (int i = 0; i < _c; i++)
		if (m == _s[i] || m == 0)
			return _c;

	ISpaceMarine **tmp = _s;
	_s = new ISpaceMarine* [_c + 1];

	for (int i = 0; i < _c; i++)
	{
		_s[i] = tmp[i];
	}
	_s[_c] = m;
	_c++;
	delete tmp;
	return _c;
}

int Squad::getCount() const
{
	return _c;
}

ISpaceMarine* Squad::getUnit(int t) const
{
	if (t < _c)
	{
		return _s[t];
	}
	return (0);
}

void Squad::emptySquad(void)
{
	for (int i = 0; i < _c; i++)
		delete _s[i];
	delete _s;
	_s = 0;
	_c = 0;
}

Squad& Squad::operator=(const Squad &c)
{
	emptySquad();
	_s = new ISpaceMarine *[c._c];
	for (int i = 0; i< c._c; i++)
	{
		_s[i] = c._s[i]->clone();
	}
	_c = c._c;
	return *this;
}