/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:23:40 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 18:10:38 by edal--ce         ###   ########.fr       */
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
		void setTarget(std::string target);
		const std::string getTarget(void) const;
		 
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
		class NotSignedException : public std::exception 
		{
			public :
			NotSignedException() throw();
			virtual const char* what() const throw();
		};
		std::string getName(void) const;

		int 	getELevel(void) const;
		int 	getSLevel(void) const;
		bool 	isSigned(void) const;
		void 	getSigned(Bureaucrat &b);
		virtual void execute(Bureaucrat const &executor) const;
		

	private :
		std::string _target;
		std::string _name;
		bool 		_signed;
		const int	_slevel;
		const int	_elevel;
};
std::ostream& operator<<(std::ostream& os, const Form &f);
#endif