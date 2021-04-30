/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:17:22 by edal              #+#    #+#             */
/*   Updated: 2021/04/30 14:02:58 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const unsigned int &s) : _s(0), _ms(s) 
{}

Span::~Span() 
{}

void Span::addNumber(int n)
{
	if (_s < _ms)
	{
		_v.push_back(n);
		_s++;
	}
	else
		throw (MaxCapacity());
}

int gen()
{
    static int i = 0;
    return ++i;
}

void Span::easyFill(unsigned int size)
{
	if (size > _ms)
		throw (MaxCapacity());
	else if (size > _s)
	{
		_v.resize(size);
		_s = size;
	}
	std::generate_n(_v.begin(), size, gen);
}

int Span::longestSpan(void) const
{
	int max = *std::max_element(_v.begin(), _v.end());
	int min = *std::min_element(_v.begin(), _v.end());
	return (std::abs(max - min));
}

int Span::shortestSpan(void) const
{
	std::vector<int> v = _v;
	std::vector<int>::iterator it;
	std::sort(v.begin(), v.end());
	int delta = -1;

	for (it = v.begin(); it != v.end() - 1; ++it) 
		if ( std::abs(*it - *(it + 1)) < delta || delta == -1)
			delta = std::abs(*(it + 1) - *it);
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