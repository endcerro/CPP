/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:02:37 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/02 16:57:17 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _tgt(target)
{

}

void RobotomyRequestForm::execute(Bureaucrat const &b) const
{
	try {
		Form::execute(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
		return;
	}
	std::cout << "* UK DRILL NOISES *" << std::endl;
	std::cout << "QUICK MATHS" << std::endl;
	std::cout << _tgt;
	srand(time(0));
	if (rand()%2)
		std::cout << " has been robotomized successfully" << std::endl;
	else
		std::cout << " hasn't been robotomized" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}