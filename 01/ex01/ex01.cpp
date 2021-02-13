/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:37:36 by edal              #+#    #+#             */
/*   Updated: 2021/02/13 17:07:48 by edal--ce         ###   ########.fr       */
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