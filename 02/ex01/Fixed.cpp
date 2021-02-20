#include "Fixed.hpp"

Fixed::Fixed(int fpv)
{
	std::cout << "Int constructor called" << std::endl;
	_fpv = fpv << _fbn;
}
Fixed::Fixed(float fpv)
{
	std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f) : _fpv(f._fpv)
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
	std::cout << "getRawBits called" << std::endl;	
	/*Just give the raw bits*/
	return this->_fpv;
}
void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits called" << std::endl;	
	/*Just set the raw bits from param*/
	this->_fpv = raw;
}
int Fixed::toInt() const
{
	std::cout << "toInt called" << std::endl;	
	/*In this function we want to get the int part
	of our raw value, it's located on the 8 leftmost
	bits, so we just shift them by 8 to the left*/
	return _fpv >> _fbn;
}
float Fixed::toFloat() const
{
	std::cout << "toFloat called" << std::endl;
	/*This function works by getting the raw value
	and dividing it by 256 in this case (2^8)
	Thanks to M A T H S we get the value we want*/
	return (float)_fpv / (float)(1 << _fbn);
}
Fixed& Fixed::operator= (const Fixed &f) //Might not work
{
	std::cout << "assignation operator called" << std::endl;
	//To compare two Fpvs we just look if the raw bits are the same
	_fpv = f.getRawBits();
	return *this;
}
// std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
// {
// 	os << fixed.toInt();
// 	return (oStream);
// }