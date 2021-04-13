/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:17:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/04 14:22:36 by edal--ce         ###   ########.fr       */
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
	
	std::stringstream _sint;
	std::stringstream _sfloat;
	std::stringstream _schar;
	std::stringstream _sdouble;

	int _ok;
};

#endif