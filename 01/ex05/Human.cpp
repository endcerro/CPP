/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:03 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/19 17:10:07 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

Human::Human(const Human &h) : _brain(h._brain){}

Human::~Human() {}

Human& Human::operator= (const Human &b)
{
	_brain.setIq(b.getBrain().getIq());
	_brain.setEq(b.getBrain().getEq());
	return *this;
}

const std::string Human::identify(void) const
{
	return this->_brain.identify();
}

const Brain &Human::getBrain(void) const
{
	return (this->_brain);
}