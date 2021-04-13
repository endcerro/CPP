/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:52:46 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/09 16:31:36 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

void fillstr(char *t)
{

}

void *serialize(void) //Size of char is 1, int is 8
{
	void *test = (char *)malloc(sizeof(std::string *) * 2 + sizeof(int));
	std::string *s1 = new std::string("Hello");
	std::string *s2 = new std::string("World");
	
	fillstr((char *)test)

	// test << s1 << s2;
	// 0*test = s1;

	return 0;
}

int main()
{
	return 0;
}