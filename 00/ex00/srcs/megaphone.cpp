/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:40:07 by edal              #+#    #+#             */
/*   Updated: 2021/02/13 17:07:32 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string s;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";		
	for (int i = 1; i < argc; i++)
	{
		s = argv[i];
		for ( std::string::iterator it=s.begin(); it != s.end(); ++it)
    		std::cout << (char)((*it >= 'a' && *it <= 'z') ? *it - 32 : *it);
	}
	std::cout << '\n';
	return (0);
}