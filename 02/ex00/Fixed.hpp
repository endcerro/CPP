#ifndef FIXED_H
#define FIXED_H value
#include <iostream>
class Fixed
{
	public : 

		Fixed(int fpv = 0);
		Fixed(const Fixed &f);
		~Fixed();
		int getRawBits() const;
		Fixed& operator= (const Fixed &f);
	private :
		int _fpv;
		static const int _fbn = 8;
};

#endif