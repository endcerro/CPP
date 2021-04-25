/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:23:40 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 17:48:33 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int s, int e) : _name(name), _signed(0), _slevel(s), _elevel(e)
{
	if (_elevel < 1 || _slevel < 1)
		throw GradeTooHighException();
	if (_elevel > 150 || _slevel > 150)
		throw GradeTooLowException();
}

Form::~Form() {}

void Form::getSigned(Bureaucrat &b)
{
	if (b.getGrade() < _slevel)
		_signed = 1;
	else
		throw GradeTooLowException();
	b.signForm(*this);
}	

bool Form::isSigned(void) const
{
	return _signed;
}

std::string Form::getName(void) const
{
	return _name;
}

int Form::getELevel(void) const
{
	return _elevel;
}
int Form::getSLevel(void) const
{
	return _slevel;
}

Form::GradeTooHighException::GradeTooHighException() throw() {}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high to process action");
}

Form::GradeTooLowException::GradeTooLowException() throw() {}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low to process action");
}

std::ostream& operator<<(std::ostream& os, const Form &c)
{
	os << "Name : " << c.getName() << " SignLevel : " << c.getSLevel() << \
	" ExeLevel : " << c.getELevel();
	if (c.isSigned())
		os << " and is signed";
	else
		os << " and isn't signed";
	return os;
}