/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:45:46 by edal              #+#    #+#             */
/*   Updated: 2021/03/25 15:36:20 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "book.hpp"
#include "contact.hpp"

Book add(Book b)
{
	std::cout << "Creating new contact : \n";
	Contact c;
	c.Setup();
	b.AddContact(c);
	return (b);
}

void search(Book b)
{
	int index;
	std::string cache;
	int ammount = b.List();
	
	if (ammount == -1)
		return ;
	std::cout << "Which entry would you like to see ? ";
	std::getline(std::cin, cache);
	if (!std::cin.good())
		exit(0);
	try
	{
		index = std::stoi(cache, NULL);
	}
	catch(std::exception &e)
	{
		std::cout << "That's not a number" << std::endl;
		index = -1;
	}
	if (index > ammount || index < 0)
		std::cout << "There is no such entry (arrays start at 0, duh)" << std::endl;
	else
		b.PrintContact(index);
}


Book fill()
{
	Book b;
	// Contact enzo0("Enzo", "Dal Cerro", "x1", "edal--ce");
	// Contact enzo1("Enzo", "Dal Cerro", "CRACKHEAD", "edal--ce");
	// Contact enzo2("Enzo", "Dal Cerro", "CRACKHEAD", "edal--ce");
	// Contact enzo3("Enzo", "Dal Cerro", "CRACKHEAD", "edal--ce");
	// Contact enzo4("Enzo", "Dal Cerro", "CRACKHEAD", "edal--ce");
	// Contact test("This is way too long", "This is way too long", "This is way too long", "This is way too long");
	// b.AddContact(enzo0);
	// b.AddContact(enzo1);
	// b.AddContact(enzo2);
	// b.AddContact(enzo3);
	// b.AddContact(enzo4);
	// b.AddContact(test);
	return b;
}

int main()
{
	Book b; //= fill();
	std::string command;
	// std::cout << "phonebook1>";
	// std::getline(std::cin, command);
	while (command != "EXIT")
	{
		std::cout << "phonebook>";
		std::getline(std::cin, command);
		if (!std::cin.good())
			exit(0);
		if (command == "ADD")
			b = add(b);
		else if (command == "SEARCH")
			search(b);
		// std::cout<< std::endl;
	}	
	return 0;
}