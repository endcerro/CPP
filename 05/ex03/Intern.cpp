/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:06:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/02 17:26:26 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"

std::string Intern::_lforms[3] = 
{
	"PresidentialPardonForm",
	"RobotomyRequestForm", 
	"ShrubberyCreationForm"
};

// void Intern::*_funs[3] = 
// {
// 	&(PresidentialPardonForm()),
// 	&(RobotomyRequestForm()), 
// 	&(ShrubberyCreationForm());
// };

Form* Intern::makeForm(std::string f, std::string t) const
{
	int fun = -1;
	for (int i = 0; i < 3; i++)
	{
		if (t == _lforms[i])
			fun = i;
	}
	if (fun != -1)
		std::cout << "Intern creates " << f << std::endl;
	if (fun == 0)
		return new PresidentialPardonForm(t);
	else if (fun == 1)
		return new RobotomyRequestForm(t);
	else if (fun == 2)
		return new ShrubberyCreationForm(t);
	return (0);
}

Intern::Intern() {}

Intern::~Intern() {}