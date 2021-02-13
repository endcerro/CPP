#include "Fixed.hpp"
#include <iostream>
int main()
{
	Fixed a;
	Fixed const b( 10 );
	int test = 10240;

	char *c = (char*) &test;
	std::cout << (int)c[0] << std::endl;
	std::cout << (int)c[1] << std::endl;
	std::cout << (int)c[2] << std::endl;
	std::cout << (int)c[3] << std::endl;
	std::cout << "\ndone";

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