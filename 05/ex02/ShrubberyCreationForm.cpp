/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:59:22 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 18:16:49 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form("ShrubberyCreationForm", 145, 137)
{
	setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{

	Form::execute(b);
	std::ofstream file;
	std::string tmp = getTarget() + "_shruberry";
	file.open(tmp.c_str());
	file << "       /\\" << std::endl;
	file << "      /\\*\\" << std::endl;
	file << "     /\\O\\*\\" << std::endl;
	file << "    /*/\\/\\/\\" << std::endl;
	file << "   /\\O\\/\\*\\/\\" << std::endl;
	file << "  /\\*\\/\\*\\/\\/\\" << std::endl;
	file << " /\\O\\/\\/*/\\/O/\\" << std::endl;
	file << "       ||" << std::endl;
	file << "       ||" << std::endl;
	file << "       ||" << std::endl;
	file.close();
}