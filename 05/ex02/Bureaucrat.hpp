/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:16 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/02 16:51:42 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BREAUCRAT_HPP
#define BREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

#include "Form.hpp"

class Bureaucrat {
	
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		const std::string getName() const;
		int getGrade() const;
	
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

		void executeForm(Form const &c);
		void incrementGrade();
		void decrementGrade();
		void	signForm(const Form &f) const;


	private :
		const std::string 	_name;
		int 				_grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat &c);

#endif