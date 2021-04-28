/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:28:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/28 14:10:45 by edal--ce         ###   ########.fr       */
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
	c.flatConvert();
	c.print();	
	return (0);
}