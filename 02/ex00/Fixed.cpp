/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:16:34 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/25 17:16:40 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int fpv) : _fpv(fpv)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f) : _fpv(f._fpv)
{
	std::cout << "Copy constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
	std::cout << "getRawBits called" << std::endl;	
	return this->_fpv;
}
void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits called" << std::endl;	
	this->_fpv = raw;
}
Fixed& Fixed::operator= (const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	_fpv = f.getRawBits();
	return *this;
}