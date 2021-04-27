/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:23:40 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/27 16:11:42 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

#include "Bureaucrat.hpp"

class Form {
	
	public:
		Form(std::string name, int s, int e);
		Form(const Form &f);
		Form& operator=(const Form &f);
		~Form();
		
		class GradeTooHighException : public std::exception
		{
			public :
			GradeTooHighException() throw();
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception 
		{
			public :
			GradeTooLowException() throw();
			virtual const char* what() const throw();
		};
		
		std::string getName(void) const;

		int 	getELevel(void) const;
		int 	getSLevel(void) const;
		bool 	isSigned(void) const;
		void 	getSigned(Bureaucrat &b);
		

	private :
		Form();
		std::string _name;
		bool 		_signed;
		const int	_slevel;
		const int	_elevel;
};
std::ostream& operator<<(std::ostream& os, const Form &f);
#endif