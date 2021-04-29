/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:29:44 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/29 16:42:22 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
int main()
{	
	// int arr[5];
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(5);

	int key = 120;

	std::cout << "Trying to find " << key << " : ";
	try 
	{
		std::list<int>::iterator i = easyfind(l, 4);
		std::cout << "OK " << *i << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << "KO  " << e.what() << std::endl;
	}
	key = 5;

	std::cout << "Trying to find " << key << " : ";
	try 
	{
		std::list<int>::iterator i = easyfind(l, key);
		std::cout << "OK " << *i << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << "KO  " << e.what() << std::endl;
	}

	std::vector<int> v(10, 0);
	v[4] = key = 150;
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);
	

	std::cout << "Trying to find " << key << " : ";
	try 
	{
		std::vector<int>::iterator i = easyfind(v, 150);
		std::cout << "OK " << *i << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << "KO  " << e.what() << std::endl;
	}
	key = 5;

	std::cout << "Trying to find " << key << " : ";
	try 
	{
		std::vector<int>::iterator i = easyfind(v, key);
		std::cout << "OK " << *i << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << "KO  " << e.what() << std::endl;
	}

	return 0;
}