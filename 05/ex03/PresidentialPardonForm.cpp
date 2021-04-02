/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:15:21 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/02 16:57:54 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _tgt(target)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	try
	{
		Form::execute(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
		return;
	}
	std::cout << _tgt << " has been pardoned by Zafod Beeblebrox." << std::endl;
}