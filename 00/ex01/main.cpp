#include <iostream>
#include <string>
#include "book.hpp"
void add()
{

}

void search()
{

}

int main()
{
	std::string command = "";
	
	int status = 1;
	while (command != "EXIT")
	{
		std::cout << "phonebook> ";
		std::getline(std::cin, command);
		if (!std::cin.good())
			exit(0);
		if (command == "ADD")
			add();
		else if (command == "SEARCH")
			search();
		else if (command == "EXIT")
			status = 0;
		else
			std::cout << "Sorry I didn't get that";
	}
	
	return 0;
}