/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:16:39 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:41:05 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}
Victim::Victim(const Victim &v) : _name(v._name)
{}

Victim& Victim::operator=(const Victim &v)
{
	_name = v._name;
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim "<< this->getName() << " just died for no apparent reason!" << std::endl;
}

const std::string Victim::getName() const
{
	return (this->_name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Victim& s)
{
	os << "I'm " << s.getName() << " and I like otters!" << std::endl; //fixed.toFloat();
	return (os);
}