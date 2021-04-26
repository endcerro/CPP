/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:58 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/26 14:42:12 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern i;
	Bureaucrat enzo("Enzo", 1);
	Form *f = i.makeForm("Test form","target");
	if (f)
		enzo.signForm(*f);
	else
		std::cout << "Form hasn't been created" << std::endl;
	f = i.makeForm("RobotomyRequestForm","target");
	if (f)
		enzo.signForm(*f);
	delete f;
	return 0;
}