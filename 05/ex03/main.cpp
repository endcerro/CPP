/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:58 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/02 16:54:40 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat a("Enzo", 2);
	// std::cout << b << std::endl;
	// try 
	// {
	// 	b.incrementGrade();
	// 	// b.incrementGrade();
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// Bureaucrat c("John", 149);
	// try 
	// {
	// 	c.decrementGrade();
	// 	// c.decrementGrade();
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// try 
	// {
	// 	Bureaucrat z("Enzo", 500);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	PresidentialPardonForm e("memes");
	RobotomyRequestForm d("tgt");
	ShrubberyCreationForm c("cible");
	e.getSigned(a);
	a.executeForm(e);
	// e.execute(a);
	// d.getSigned(a);
	// d.execute(a);
	// c.getSigned(a);
	// c.execute(a);
	return 0;

}