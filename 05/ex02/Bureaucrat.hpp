/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:16 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 18:06:49 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BREAUCRAT_HPP
#define BREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

#include "Form.hpp"
//COPILEN OK

class Bureaucrat {
	
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat& operator=(const Bureaucrat &b);


		~Bureaucrat();
		
		void executeForm(Form const &f);	
		void signForm(const Form &f) const;
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

		void incrementGrade();
		void decrementGrade();


	private :
		const std::string 	_name;
		int 				_grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat &c);

#endif