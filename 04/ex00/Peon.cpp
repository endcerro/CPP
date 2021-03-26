/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:16:39 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 17:39:35 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog."  << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}