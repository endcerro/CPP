#include "Fixed.hpp"

Fixed::Fixed() : _rval(0)
{
	std::cout << "Default constructor called" << std::endl;	
}

Fixed::Fixed(int rval)
{
	std::cout << "Int constructor called" << std::endl;
	/*Here we get the int part so we just shift it to 
	make room for future decimal part				*/
	_rval = rval << _nfb;
}
Fixed::Fixed(float val)
{
	std::cout << "Float constructor called" << std::endl;
	_rval = (int)roundf(val * (float)(1 << _nfb));
	// _rval = (int)(val * (float)(1 << _nfb));
}
Fixed::Fixed(const Fixed &f) : _rval(f._rval)
{
	std::cout << "Copy constructor called" << std::endl;
	/*Just get the raw bits since point location is always 8*/
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
	// std::cout << "getRawBits called" << std::endl;	
	/*Just give the raw bits*/
	return this->_rval;
}
void Fixed::setRawBits(int raw)
{
	// std::cout << "setRawBits called" << std::endl;	
	/*Just set the raw bits from param*/
	_rval = raw;
}
int Fixed::toInt() const
{
	// std::cout << "toInt called" << std::endl;	
	/*In this function we want to get the int part
	of our raw value, it's located on the 8 leftmost
	bits, so we just shift them by 8 to the left*/
	return _rval >> _nfb;
}
float Fixed::toFloat() const
{
	// std::cout << "toFloat called" << std::endl;
	/*This function works by getting the raw value
	and dividing it by 256 in this case (2^8)
	if the raw bits = 256 then we have 1.0
	So 275 / 256 = 1.074xxxx
	Thanks to M A T H S we get the value we want*/
	return (float)_rval / (float)(1 << _nfb);
}
Fixed& Fixed::operator= (const Fixed &f) //Might not work
{
	
	//To compare two rvals we just look if the raw bits are the same
	std::cout << "assignation operator called" << std::endl;
	_rval = f.getRawBits();
	return *this;
}
int Fixed::operator> (const Fixed &f2)
{
	return (this->getRawBits() > f2.getRawBits());
}
int Fixed::operator< (const Fixed &f2)
{
	return (this->getRawBits() < f2.getRawBits());
}
int Fixed::operator>= (const Fixed &f2)
{
	return (this->getRawBits() >= f2.getRawBits());
}
int Fixed::operator<= (const Fixed &f2)
{
	return (this->getRawBits() <= f2.getRawBits());
}
int Fixed::operator== (const Fixed &f2)
{
	return (this->getRawBits() == f2.getRawBits());
}
int Fixed::operator!= (const Fixed &f2)
{
	return (this->getRawBits() != f2.getRawBits());
}

int Fixed::operator+ (const Fixed &f2)
{
	return (this->getRawBits() + f2.getRawBits());
}

int Fixed::operator- (const Fixed &f2)
{
	return (this->getRawBits() - f2.getRawBits());
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
