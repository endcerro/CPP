/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:50:40 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/29 16:22:33 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#include <iostream>

int main()
{
	std::cout << "Int testing" << std::endl;
	int a = 42;
	int b = 52;
	std::cout << "a = "<< a << " b = " << b << std::endl;
	std::cout << "Swap"<<std::endl;
	::swap<int>(a,b);
	std::cout << "a = "<< a << " b = " << b << std::endl;
	std::cout << "Max : " << ::max<int>(a,b) <<std::endl;
	std::cout << "Min : " << ::min<int>(a,b) <<std::endl;


	std::cout << "Double testing" << std::endl;
	double c = 420.69;
	double d = 69.420;
	std::cout << "c = "<< c << " d = " << d << std::endl;
	std::cout << "Swap"<<std::endl;
	::swap<double>(c,d);
	std::cout << "c = "<< c << " d = " << d << std::endl;
	std::cout << "Max : " << ::max<double>(c,d) <<std::endl;
	std::cout << "Min : " << ::min<double>(c,d) <<std::endl;


	return 0;
}