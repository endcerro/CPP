/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:28:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/27 16:49:56 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Converter.hpp"
int isInt(char *s)
{
	for (size_t i = 0; i < strlen(s); i++)
	{
		if (s[i] < '0' || s[i] > '9' )
				return 0;
	}
	return 1;
}

int isFloat(char *s)
{
	int dnb = 0;	
	for (size_t i = 0; i < strlen(s) - 1; i++)
	{
		if (s[i] < '0' || s[i] > '9' )
			return 0;
		else if (s[i] == '.')
			dnb++;
	}
	return 1;
}

int getType(char *s)
{
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
	std::string tmp(av[1]);
	if (tmp == "nan")
		tmp = "nanf";
	else if (tmp == "-inff")
		tmp = "-inf";
	else if (tmp == "+inff")
		tmp = "+inf";
	else if (tmp == "inff")
		tmp = "inf";
	Converter c(tmp);

	c.flatConvert();
	c.print();	
	// Converter z = c;
	// z.print();
	// c.print();
	return (0);
}