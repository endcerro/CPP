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
Fixed& Fixed::operator= (const Fixed &f)
{
	std::cout << "assignation operator called" << std::endl;
	_fpv = f.getRawBits();
	return *this;
}