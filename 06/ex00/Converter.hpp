/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:17:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/29 15:42:01 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <cmath>

class Converter {
	
	public:
		Converter(std::string av);
		Converter(const Converter &c);
		Converter& operator=(const Converter &c);
		~Converter() {}
		bool flatConvert();
		void print();
		bool in_list(std::string s);
	private :
		std::string _in;
		int 		_int;
		char 		_char;
		float 		_float;
		double 		_double;
		bool 		_conv[4];
};

#endif