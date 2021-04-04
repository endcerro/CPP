/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:28:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/04 14:52:25 by edal--ce         ###   ########.fr       */
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
		// std::cout << "Bad nb of args" << std::endl;
	
		std::cout << "Min int: " << std::numeric_limits<int>::min() << '\n';
		std::cout << "Max int: " << std::numeric_limits<int>::max() << '\n';
		std::cout << "Min double: " << std::numeric_limits<double>::min() << '\n';
		std::cout << "Max double: " << std::numeric_limits<double>::max() << '\n';
		std::cout << "Min float: " << std::numeric_limits<float>::min() << '\n';
		std::cout << "Max float: " << std::numeric_limits<float>::max() << '\n';
		if ( std::numeric_limits<double>::max() > std::numeric_limits<float>::max())
			std::cout << "Double can be bigger than float" << std::endl;
		if ( std::numeric_limits<double>::min() < std::numeric_limits<float>::min())
			std::cout << "Double can be smaller than float" << std::endl;
		if ( std::numeric_limits<double>::max() > std::numeric_limits<int>::max())
			std::cout << "Double can be bigger than int " << std::endl;
		if ( std::numeric_limits<int>::min() < std::numeric_limits<double>::min())
			std::cout << "Int can be smaller than double" << std::endl;
		return (1);
	}
	std::string tmp(av[1]);
	if (tmp == "nan")
	{
		tmp = "nanf";
	}
	else if (tmp == "-inff")
		tmp = "-inf";
	else if (tmp == "+inff")
		tmp = "+inf";
	else if (tmp == "inff")
		tmp = "inf";
	Converter c(tmp);
	std::cout << tmp << std::endl	;
	if (c.isInt())
	{
		c.print();
	}
	else if (c.isFloat())
	{
		std::cout << "F" << std::endl;
		c.print();
	}
	else if (c.isDouble())
	{
		std::cout << "D" << std::endl;
		c.print();
	}
	else if (c.isChar())
	{

		c.print();
	}
	else
	{
		std::cout << "wtf is that" << std::endl;
		return 1;
	}
	

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