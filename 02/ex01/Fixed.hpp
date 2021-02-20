#ifndef FIXED_H
#define FIXED_H value
#include <iostream>
class Fixed
{
	public : 

		~Fixed();
		Fixed(int fpv = 0);
		Fixed(float fpv);
		Fixed(const Fixed &f);
		Fixed& operator= (const Fixed &f);
		void setRawBits(int raw);
		int toInt() const;
		float toFloat() const;
		int getRawBits() const;
		

	private :
		int _fpv;					//Number storage Fixed Point Value
		static const int _fbn = 8;	//Last 8 bits are floating part
};
// std::string operator<< (std::ostream& os, const Fixed &f);
#endif