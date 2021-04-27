/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:02:37 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/27 16:13:11 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	setTarget(target);
}

void RobotomyRequestForm::execute(Bureaucrat const &b) const
{
	srand(time(0));
	// try {
		Form::execute(b);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what();
	// 	return;
	// }
	std::cout << "* DRILL NOISES *" << std::endl;
	std::cout << "SKU SKU" << std::endl;
	std::cout << getTarget();
	if (rand() % 2)
		std::cout << " has been robotomized successfully" << std::endl;
	else
		std::cout << " hasn't been robotomized" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}