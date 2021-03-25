/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:08:50 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/25 17:16:57 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		void setRawBits(int raw);
		Fixed& operator= (const Fixed &f);
	private :
		int _fpv;
		static const int _fbn = 8;
};

#endif