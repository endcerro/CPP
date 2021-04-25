/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:58 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 17:38:27 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
// #include "Form.hpp"


int main()
{
	Bureaucrat a("Enzo", 4);
	std::cout << a << std::endl;
	try 
	{
		a.incrementGrade();
		a.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << a << std::endl;
	Bureaucrat c("John", 148);
	std::cout << c << std::endl;
	try 
	{
		c.decrementGrade();
		c.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << c << std::endl;
	try 
	{
		c.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << c << std::endl;

	return 0;
}