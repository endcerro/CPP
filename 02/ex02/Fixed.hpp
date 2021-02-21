#ifndef FIXED_H
#define FIXED_H value
#include <iostream>
#include <math.h>
class Fixed
{
	public : 

		~Fixed();
		Fixed();
		Fixed(int rval);
		Fixed(float rval);
		Fixed(const Fixed &f);
		Fixed& operator= (const Fixed &f);
		int operator> (const Fixed &f2);
		int operator< (const Fixed &f2);
		int operator>= (const Fixed &f2);
		int operator<= (const Fixed &f2);
		int operator== (const Fixed &f2);
		int operator!= (const Fixed &f2);
		int operator+ (const Fixed &f2);
		int operator-1 (const Fixed &f2);
		void setRawBits(int raw);
		int toInt() const;
		float toFloat() const;
		int getRawBits() const;
		

	private :
		int _rval;					//Number storage Fixed Point Value
		static const int _nfb = 8;	//Last 8 bits are floating part
};
std::ostream& operator<< (std::ostream& os, const Fixed &f);
#endif