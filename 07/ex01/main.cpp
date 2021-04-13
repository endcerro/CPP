/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:00:18 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/13 18:14:37 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
	int arri[5] = {1, 2, 3, 4, 5};
	
	for (int i = 0; i < 5; i++)
		std::cout << arri[i];
	std::cout << std::endl;
	iter(arri, 5, incr<int>);
	for (int i = 0; i < 5; i++)
		std::cout << arri[i];
	std::cout << std::endl;
	

	char arrc[5] = {'A', 'B', 'C', 'E', 'G'};
	for (int i = 0; i < 5; i++)
		std::cout << arrc[i];
	std::cout << std::endl;
	iter(arrc, 5, incr<char>);
	for (int i = 0; i < 5; i++)
		std::cout << arrc[i];
	std::cout << std::endl;

	return 0;
}