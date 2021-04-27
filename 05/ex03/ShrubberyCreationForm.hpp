/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:59:22 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/27 16:15:49 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const &c) const;
	private :
		ShrubberyCreationForm();
		std::string _tgt;
};

#endif