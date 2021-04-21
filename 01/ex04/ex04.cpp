/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:07:59 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/20 15:29:19 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *ptr = &s;
	std::string &ref = s;

	std::cout << "From the var : " << s << std::endl;
	std::cout << "From the ptr : " << *ptr << std::endl;
	std::cout << "From the ref : " << ref << std::endl;

	return 0;
}