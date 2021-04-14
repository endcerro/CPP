/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:18:20 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/14 15:18:33 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

int main()
{
	Array<int> ar(5);
	Array<int> ar2(10);

	
	for (int i = 0; i < 10; i++)
	{
		ar2[i] = i;
	// 	std::cout << i << " ";
	}
	// std::cout << std::endl;


	for (int i = 0; i < 5; i++)
	{
		ar[i] = i * 5;
		// std::cout << ar2[i] << " ";
	}
	// std::cout << std::endl;
	std::cout << "Arr 1" << std::endl;
	ar.print();	
	std::cout << "Arr 2" << std::endl;
	ar2.print();
	ar = ar2;
	std::cout << "Arr 1" << std::endl;
	ar.print();	
	std::cout << "Arr 2" << std::endl;
	ar2.print();
	return 0;
}