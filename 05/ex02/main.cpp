/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:58 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 18:17:55 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat a("Enzo", 2);
	PresidentialPardonForm e("Harambe");
	RobotomyRequestForm d("Robotomy");
	ShrubberyCreationForm c("Shrub");
	// e.getSigned(a);
	// d.getSigned(a);
	// c.getSigned(a);
	try
	{
		a.executeForm(e);	
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		a.executeForm(d);	
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		a.executeForm(c);	
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// a.executeForm(d);
	// a.executeForm(c);
	// e.execute(a);
	d.getSigned(a);
	e.getSigned(a);
	// d.execute(a);
	c.getSigned(a);
	// c.execute(a);
	try
	{
		a.executeForm(e);	
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		a.executeForm(d);	
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		a.executeForm(c);	
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;

}