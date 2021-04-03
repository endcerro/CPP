/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:17:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/03 17:44:56 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <limits>

class Converter {
	
	public:
		Converter(std::string av);
		~Converter() {}
		bool isInt();
		bool isFloat();
		bool isDouble();
		bool isChar();
		void print();
	private :
	const std::string _in;
	int 	_int;
	float 	_float;
	char 	_char;
	double 	_double;

	std::stringstream _out[4];
	std::stringstream _sint;
	std::stringstream _sfloat;
	std::stringstream _schar;
	std::stringstream _sdouble;



	bool 	_conv[4];
};

#endif