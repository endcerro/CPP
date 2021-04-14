/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:16:17 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/14 13:50:45 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <time.h>
#include <random>
#include <iostream>

Base *generate(void)
{
	Base *base;
	switch (rand() % 3)
	{
		case 0:
			std::cout << "Generated A" << std::endl;
			return (new A);
		case 1:
			std::cout << "Generated B" << std::endl;
			return (new B);
		case 2:
			std::cout << "Generated C" << std::endl;
			return (new C);
		default :
			std::cout << "Eh" << std::endl;
	}
	return 0;
}

void identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "A type pointer" << std::endl;
	if (b)
		std::cout << "B type pointer" << std::endl;
	if (c)
		std::cout << "C type pointer" << std::endl;

}

void identify_from_reference(Base & p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A type reference"<< std::endl;
	}
	catch (std::exception &e){	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B type reference"<< std::endl;
	}
	catch (std::exception &e){	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C type reference"<< std::endl;
	}
	catch (std::exception &e){	}

}

int main()
{
	srand(time(NULL));
	Base *b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete (b);
	return 0;
}