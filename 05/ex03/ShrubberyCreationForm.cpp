/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:59:22 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/02 16:57:27 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form("ShrubberyCreationForm", 145, 137), _tgt(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void ShrubberyCreationForm::execute(Bureaucrat const &b) const
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
	std::ofstream file;
	file.open(_tgt + "_shruberry");
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