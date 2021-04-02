/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:28:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/02 18:19:55 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
	int val = atoi(av[1]);
	std::cout << "char : " ;
	if (val > 31 && val < 127)
		std::cout << (char)val << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int : " << val;


	return (0);
}