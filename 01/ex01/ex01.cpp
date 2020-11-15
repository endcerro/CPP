/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:37:36 by edal              #+#    #+#             */
/*   Updated: 2020/11/15 18:38:15 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <iostream>
void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;

	delete panther;
}

int main()
{
	memoryLeak();
	return (0);
}