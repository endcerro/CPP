/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:16 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/27 16:14:07 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name), _grade(b._grade)
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
	_grade = b._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::executeForm(Form const &f)
{
	try
	{
		f.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
		return ;
	}
	std::cout << _name << " executes " << f.getName() << std::endl;
}

void	Bureaucrat::signForm(const Form &f) const
{
	if (f.getSLevel() > _grade)
		std::cout << _name << " signs " <<	f.getName() << std::endl;
	else
		std::cout << _name << " cannot sign " 
	<<	f.getName() << " because too low level" << std::endl;
}

void Bureaucrat::incrementGrade() 
{
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decrementGrade() 
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high (max = 1) to increment\n");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low (min = 150) to decrement\n");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &c)
{
	os << c.getName() << ", bureaucrat grade " << c.getGrade();
	return os;
}