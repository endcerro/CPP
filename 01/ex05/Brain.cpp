/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:01 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/25 16:52:35 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(int iq, int eq) : _iq(iq), _eq(eq) {}
Brain::~Brain() {}

int Brain::getIq(void) const
{
	return this->_iq;
}

int Brain::getEq(void) const
{
	return this->_eq;
}

std::string Brain::identify(void) const
{
	std::stringstream stream;
	stream << this;
	return stream.str();
}