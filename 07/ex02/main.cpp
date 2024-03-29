/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:18:20 by edal--ce          #+#    #+#             */
/*   Updated: 2021/05/04 17:34:10 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

int main()
{
	Array<int> ar(5);
	Array<int> ar2(10);

	
	for (int i = 0; i < 5; i++)
		ar[i] = i * 5;
	for (int i = 0; i < 10; i++)
		ar2[i] = i;


	std::cout << "Arr 1" << std::endl;
	ar.print();	
	std::cout << "Arr 2" << std::endl;
	ar2.print();
	ar = ar2;
	std::cout << "Arr 1" << std::endl;
	ar.print();	
	std::cout << "Arr 2" << std::endl;
	ar2.print();
	try
	{
		std::cout << ar2[6] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}