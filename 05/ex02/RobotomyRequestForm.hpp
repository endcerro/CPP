/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:03:11 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/27 16:13:23 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		void execute(Bureaucrat const &c) const;
	private :
		RobotomyRequestForm();
		std::string _tgt;
};

#endif