/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:03 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/25 16:52:10 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

const std::string Human::identify(void) const
{
	return this->_brain.identify();
}

const Brain &Human::getBrain(void) const
{
	return (this->_brain);
}