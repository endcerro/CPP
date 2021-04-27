/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:06:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/27 16:14:24 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"

std::string Intern::_lforms[6] = 
{
	"PresidentialPardonForm",
	"RobotomyRequestForm", 
	"ShrubberyCreationForm",
	"Presidential pardon",
	"Robotomy request", 
	"Shrubbery creation"
};

Form* Intern::makeForm(std::string f, std::string t) const
{
	int fun = -1;
	for (int i = 0; i < 6; i++)
	{
		if (f.compare(_lforms[i]) == 0)
			fun = i;
	}
	if (fun != -1)
		std::cout << "Intern creates " << f << std::endl;
	if (fun == 0 || fun == 3)
		return new PresidentialPardonForm(t);
	else if (fun == 1 || fun == 4)
		return new RobotomyRequestForm(t);
	else if (fun == 2 || fun == 5)
		return new ShrubberyCreationForm(t);
	return (0);
}

Intern::Intern() {}

Intern& Intern::operator=(const Intern &i) 
{
	(void)i._lforms;
	return *this;
}

Intern::Intern(const Intern &i) 
{
	(void)i._lforms;
}

Intern::~Intern() {}