/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:15:21 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 18:14:48 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	// try
	// {
		Form::execute(b);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout <<"HERE :" <<e.what();
	// 	return;
	// }
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}