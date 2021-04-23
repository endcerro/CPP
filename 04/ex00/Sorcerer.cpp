/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:19:39 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:43:15 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &s) : _name(s._name), _title(s._title)
{
	std::cout << _name << ", " << _title << ", is born by copy!" << std::endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer &s)
{
	_name = s._name;
	_title = s._title;
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string Sorcerer::getName() const
{
	return this->_name;
}

const std::string Sorcerer::getTitle() const
{
	return this->_title;
}

std::ostream& operator<<(std::ostream& os, const Sorcerer& s)
{
	os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl; //fixed.toFloat();
	return (os);
}

void Sorcerer::polymorph(const Victim &v) const
{
	v.getPolymorphed();
}

void Sorcerer::polymorph(const Peon &v) const
{
	v.getPolymorphed();
}