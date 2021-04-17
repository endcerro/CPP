/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:17:22 by edal              #+#    #+#             */
/*   Updated: 2021/04/17 18:04:44 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const unsigned int &s) : _s(0), _c(s) 
{
	_arr = new int[s];
	for (unsigned int i = 0; i < s; i++)
		_arr[i] = 0;
}

Span::~Span() 
{
	delete _arr;
}

void Span::addNumber(int n)
{
	if (_s + 1 <= _c)
		_arr[_s++] = n;
	else
		throw (MaxCapacity());
}

int Span::longestSpan(void) const // check with neg values
{
	int max;
	int min;

	if (_s < 2)
		throw (NoMembers());
	min = max = _arr[0];

	for (unsigned int i = 0; i < _s; i++)
	{
		if (_arr[i] < min)
			min = _arr[i];
		else if (_arr[i] > max)
			max = _arr[i];
	}
	return (max - min);
}

unsigned int dist(int a, int b)
{
	if (a < 0 && b > 0)
		return (b - a);
	else if (a > 0 && b < 0)
		return(a - b);
	else if (a < 0 && b < 0)
		return(-a - b);
	else if ( a < b)
		return(b - a);
	else
		return(a - b);
}


int Span::shortestSpan(void) const // check with neg values
{
	if (_s < 2)
		throw (NoMembers());
	unsigned int delta = dist(_arr[0], _arr[1]);
	for (unsigned int i = 0; i < _s; i++)
		for (unsigned int j = 0; j < _s; j++)
			if (i != j && (dist(_arr[i], _arr[j]) < delta))
				delta = dist(_arr[i], _arr[j]);
	return (delta);
}

Span::MaxCapacity::MaxCapacity() throw() {}

const char* Span::MaxCapacity::what() const throw()
{
	return ("Container is already full");
}

Span::NoMembers::NoMembers() throw() {}

const char* Span::NoMembers::what() const throw()
{
	return ("Not enough members to perform the action");
}