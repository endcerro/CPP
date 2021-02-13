/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:44:06 by edal              #+#    #+#             */
/*   Updated: 2021/02/13 17:07:35 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "book.hpp"

Book::Book(void) {}
Book::~Book(void) {}

void Book::AddContact(Contact c)
{
	int index;
	std::string cache;
	if (this->_ammount == STORAGE)
	{
		std::cout << "Storage is full, choose which entry to delete (-1 to cancel)\n";
		this->List();
		std::getline(std::cin, cache);
		try
		{
			index = std::stoi(cache, NULL);
		}
		catch(std::exception &e)
		{
			std::cout << "That's not a number" << std::endl;
			index = -1;
		}
		if (index >= 0 && index < this->_ammount)
			this->_db[index] = c;
		else
			std::cout << "Replacement canceled";
	}
	else
		this->_db[this->_ammount++] = c;
}

void Book::PrintContact(int index) const
{
	this->_db[index].Print();
}

int Book::List(void) const
{
	std::string s;

	std::cout << "|";
	s = "index";
	if (s.length() > DISPLAY)
	s.replace(DISPLAY - 1, std::string::npos, ".");
	std::cout << s;
	for(int j = s.length(); j < DISPLAY; j++)
		std::cout << " ";
	
	for(int i = 0; i < 3; i++)
	{
		std::cout << "|";
		s = this->_db[0].GetLabel(i);
		if (s.length() > DISPLAY)
			s.replace(DISPLAY - 1, std::string::npos, ".");
		std::cout << s;
		for(int j = s.length(); j < DISPLAY; j++)
			std::cout << " ";
	}
	std::cout << "|" << std::endl;
	for(int i = 0; i < 45; i++)
		std::cout << "-";
	std::cout << std::endl;
	int j = -1;
	while (++j < this->_ammount)
	{
		std::cout << "|" << j;
		for(int n = 1; n < DISPLAY; n++)
			std::cout << " ";
		for (int i = 0; i < 3; i++)
		{
			s = this->_db[j].GetField(i);
			if (s.length() > DISPLAY)
				s.replace(DISPLAY - 1, std::string::npos, ".");
			std::cout << "|" << s;
			for(int n = s.length(); n < DISPLAY; n++)
				std::cout << " ";	
		}
		std::cout << "|" << std::endl;
	}
	std::cin.clear();
	return (j);
}