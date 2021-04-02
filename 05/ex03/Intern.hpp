/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:06:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/02 17:24:34 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
#define INTER_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

	public:
		Intern();
		~Intern();
		Form*	makeForm(std::string form, std::string target) const;
	private :
		static std::string _lforms[3];
		// void 	*_funs[3];
};

#endif
