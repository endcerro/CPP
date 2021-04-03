/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:28:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/03 17:45:55 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Converter.hpp"
int isInt(char *s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] < '0' || s[i] > '9' )
			return 0;
	}
	return 1;
}

int isFloat(char *s)
{
	int dnb = 0;
	int p = 0;
	for (int i = 0; i < strlen(s) - 1; i++)
	{
		if (s[i] < '0' || s[i] > '9' )
			return 0;
		else if (s[i] == '.')
			dnb++;
		// else if (s[i] == 'f')
		// 	dnb++;
	}
	// if
	return 1;
}

int getType(char *s)
{
	int i = 0;
	if (isInt(s))
		return 1;
	else if (isFloat(s))
		return 2;

	return 0;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Bad nb of args" << std::endl;
		return (1);
	}
	Converter c(av[1]);
	if (c.isInt())
	{
		std::cout << "that's an int" << std::endl;
		c.print();
	}
	else if (c.isFloat())
	{
		std::cout << "that's a float" << std::endl;
		c.print();
	}
	else if (c.isDouble())
	{
		std::cout << "that's a double" << std::endl;
	}
	else if (c.isChar())
	{
		std::cout << "That's a char" << std::endl;
	}
	else
		std::cout << "wtf is that" << std::endl;

	// std::stringstream t[4];

	// t[0] = "sAmple text 1";
	// t[1] = "sAmple text 2";
	// t[2] = "sAmple text 3";
	// t[3] = "sAmple text 4";

	// std::cout << (t[0]);
	// std::cout << (t[1]);
	// std::cout << (t[2]);
	// std::cout << (t[3]);


	// int val = atoi(av[1]);
	// std::cout << "char : " ;
	// if (val > 31 && val < 127)
	// 	std::cout << (char)val << std::endl;
	// else
	// 	std::cout << "Non displayable" << std::endl;

	// std::cout << "int : " << val;
	// std::cout << (float)val << "f" <<std::endl;
	

	return (0);
}