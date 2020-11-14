/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:44:06 by edal              #+#    #+#             */
/*   Updated: 2020/11/14 18:52:43 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "book.hpp"

Book::Book(void) 
{
	// for(int i = 0; i < STORAGE; i++)
	// {
	// 	this->db[i] = NULL;
	// }
}
Book::~Book(void) {}

void Book::AddContact(Contact c)
{
	if (this->ammount < STORAGE)
		this->db[this->ammount++] = c;
	else
		std::cout << "Too much shit";
}

void Book::PrintBook(void) const
{
	for(int i = 0; i < this->ammount; i++)
		this->db[i].Print();
}


std::string trunc(std::string s)
{
	std::string n = s;
	if (s.length() > 10)
		n.replace(10, std::string::npos, ".");
	return (n);
}

void Book::List(void) const
{
	std::string s;
	const int len = 10;
	
	for(int i = 0; i < 4; i++)
	{
		std::cout << "|";
		s = this->db[0].GetLabel(i);
		if (s.length() > len)
			s.replace(len - 1, std::string::npos, ".");
		std::cout << s;
		for(int j = s.length(); j < len; j++)
			std::cout << " ";
	}
	std::cout << "|" << std::endl;
	for(int i = 0; i< 45; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int j = 0; j < ammount; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			s = this->db[j].GetField(i);
			if (s.length() > len)
				s.replace(len - 1, std::string::npos, ".");
			std::cout << "|" << s;
			for(int n = s.length(); n < len; n++)
				std::cout << " ";	
		}
		std::cout << "|" << std::endl;
	}
	// std::cout << "|" << std::endl;
}