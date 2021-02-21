#include "Fixed.hpp"
#include <math.h>
#include <iostream>
int main()
{
		Fixed a(4.3f);
	Fixed b(8.2f);

	std::cout << ( a >	 b) << std::endl;
	std::cout << ( a <	 b) << std::endl;

	std::cout << ( a >=	 b) << std::endl;
	std::cout << ( a <=	 b) << std::endl;
	

	std::cout << ( a ==	 b) << std::endl;
	std::cout << ( a !=	 b) << std::endl;
	
	a = a + b;

	std::cout << a << std::endl;
	a = a - b;
	std::cout << a  << std::endl;


	return 0;
}