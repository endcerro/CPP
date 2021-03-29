/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:01 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/29 11:59:38 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(int iq, int eq) : _iq(iq), _eq(eq) {}
Brain::Brain(const Brain &b) : _iq(b._iq), _eq(b._eq) {}
Brain::~Brain() {}

int Brain::getIq(void) const
{
	return this->_iq;
}

int Brain::getEq(void) const
{
	return this->_eq;
}

void Brain::setIq(int iq)
{
	this->_iq = iq;
}
void Brain::setEq(int eq)
{
	this->_eq = eq;
}

std::string Brain::identify(void) const
{
	std::stringstream stream;
	stream << this;
	return stream.str();
}
Brain& Brain::operator= (const Brain &f)
{
	this->_iq = f._iq;
	this->_eq = f._eq;
	return *this;
}