#include "Fixed.hpp"
#include <math.h>
#include <iostream>
int main()
{
	Fixed a;
	Fixed const b( 10 );
	// int test = 10240;

	// int test = 8;		//10 = 1010
	// std::cout << "Base value is " << 10 << std::endl;
	// test = test >> 1;
	// std::cout << "<< 1 value is " << test << std::endl;

	// << seems to be moving the bits 

// Fixed::Fixed(const float nb)
// {
	int base = 5;
	std::cout << "Base is " << base << std::endl;
	int base_r = base << 8;
	std::cout << "Fixed_p mod " << base_r << std::endl;
	float base_f = (base_r + 128) / (float)(1 << 8);
	//Adding 128, which is 10000000 8 bit value
	//Only the lefmost bit is at 1 
	//Giving us 2^-1 hence .5
	std::cout << "base_f " << base_f << std::endl;
	base_f = (base_r + 128 + 64) / (float)(1 << 8); //256 is the biggest 8 bit value
	//Adding 128 + 64, which is 11000000 8 bit value
	//Only the 2 lefmost bit is at 1 
	//Giving us 2^-1 + 2^-2 hence .75


	std::cout << "base_f " << base_f << std::endl;

	Fixed beta(5);

	beta.setRawBits(beta.getRawBits() + 128);
	std::cout << beta.getRawBits() << std::endl;
	std::cout << beta.toInt() << std::endl;
	std::cout << beta.toFloat() << std::endl;

	// std::cout << "Float constructor called with 2.5\n";
	// float nb = 2.5f;
	// int m_rawBits = (int)(roundf(nb * (1 << 8)));
	// std::cout << "RawBits = " << m_rawBits << std::endl;
	// m_rawBits =  m_rawBits >> 8 ;

	// std::cout << "int part ?" << m_rawBits << std::endl;
	// m_rawBits = (int)(roundf(nb * (1 << 8)));

	// // m_rawBits= 
	// float test = m_rawBits / (float)(1 << 8);

	// std::cout << "float part ?" << test << std::endl;
	
	// int test2 = 1 << 8;

	// std::cout << "1 << 8 = " << test2 << std::endl;
	// char *c = (char*) &test;
	// std::cout << (int)c[0] << std::endl;
	// std::cout << (int)c[1] << std::endl;
	// std::cout << (int)c[2] << std::endl;
	// std::cout << (int)c[3] << std::endl;
	// std::cout << "done" << std::endl;

	// Fixed const c( 42.42f );
	// Fixed const d( b );
	// a = Fixed( 1234.4321f );
	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	// return 0;
	return 0;
}