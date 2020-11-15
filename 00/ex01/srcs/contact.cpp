/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:28:58 by edal              #+#    #+#             */
/*   Updated: 2020/11/14 19:37:15 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "contact.hpp"

std::string Contact::_labels[FIELDS_NB] = 
{
	"first name",
	"last name", 
	"nickname", 
	"login",
	"postal address",
	"email address", 
	"phone number", 
	"birthday date", 
	"favortie meal", 
	"underwear color", 
	"darkest secret"
};

Contact::~Contact(void){}
Contact::Contact(void){}
Contact::Contact(std::string a,std::string b,std::string c,std::string d)
{
	this->_fields[0] = a;
	this->_fields[1] = b;
	this->_fields[2] = c;
	this->_fields[3] = d;
}

void Contact::Setup(void)
{
	for(int i = 0; i < FIELDS_NB; i++)
	{
		std::cout << this->_labels[i] << " ? : ";
		std::getline(std::cin, this->_fields[i]);
	}
}

std::string Contact::GetField(int index) const
{
	return (this->_fields[index]);
}

std::string Contact::GetLabel(int index) const
{
	return (this->_labels[index]);
}

void Contact::Print(void) const
{
	for(int i = 0; i < FIELDS_NB; i++)
	{
		std::cout << this->_labels[i] << " : ";
		std::cout << this->_fields[i] << std::endl;
	}
}
