/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:06:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/26 14:46:45 by edal--ce         ###   ########.fr       */
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
		Intern(const Intern &i);
		Intern& operator=(const Intern &i);
		~Intern();
		Form*	makeForm(std::string form, std::string target) const;
	private :
		static std::string _lforms[6];
};

#endif
