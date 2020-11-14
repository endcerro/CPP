#include <iostream>
#include <string>
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
	b.List();
}




int main()
{

	std::string command = "";
	
	Book b;
	while (command != "EXIT")
	{
		std::cout << "phonebook> ";
		std::getline(std::cin, command);
		if (!std::cin.good())
			exit(0);
		if (command == "ADD")
			b = add(b);
		else if (command == "SEARCH")
			search(b);
	}

	b.PrintBook();
	
	return 0;
}