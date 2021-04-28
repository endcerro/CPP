/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:28:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/28 16:36:19 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Converter.hpp"



int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Bad nb of args" << std::endl;
		return (1);
	}
	std::string tmp(av[1]);
	Converter c(tmp);
	if (c.flatConvert() == 0)
		c.print();	
	else
		std::cout << "Insupported input" << std::endl;
	/*int t = 120;
	double d = 250.25;
	float f = 850.42f;
	std::cout << t << " " << d << " " << f << std::endl;*/
	return (0);
}