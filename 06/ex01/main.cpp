/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:52:46 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/29 15:57:46 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include <time.h>
#include <cstdlib>
#include <iostream>

struct Data { std::string s1; int n; std::string s2; };


char randchar()
{
	std::string test = "abcdefghijlmnopqrstuvwxyz";
	char t = test[rand() % 26];
	return t;
}

void *serialize(void)
{
	srand(time(NULL));
	
	char *charv = new char[20];
	int *intv = reinterpret_cast<int *>(charv);
	char c;

	std::cout << "S1 build : ";
	for (int i = 0; i < 8; i++)
	{
		c = randchar();
		std::cout << c;
		charv[i] = c;
	}
	std::cout << std::endl;
	intv[2] = rand();
	std::cout << "Int is : " << intv[2] <<std::endl;
	std::cout << "S2 build : ";
	for (int i = 12; i < 20; i++)
	{
		c = randchar();
		std::cout << c;
		charv[i] = c;
	}
	std::cout << std::endl;
	return charv;
}


Data *deserialize(void *raw)
{
	Data *d = new Data();
	char *charv = reinterpret_cast<char *>(raw);
	int *intv = reinterpret_cast<int *>(raw);

	for (int i = 0; i < 8; i++)
		d->s1 += charv[i];
	d->n = intv[2];
	for (int i = 12; i < 20; i++)
		d->s2 += charv[i];
	
	return d;
}

int main()
{
	void *raw = serialize();
	Data *d = deserialize(raw);
	std::cout << "Decoded : " << std::endl;
	std::cout << "S1 = " << d->s1 << " int = " << d->n << " S2= " << d->s2 << std::endl;
	delete static_cast<char *>(raw);
	delete d;
	return 0;
}