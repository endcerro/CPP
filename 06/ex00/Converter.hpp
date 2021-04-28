/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:17:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/28 14:05:45 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <limits>

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
		int _int;
		char _char;
		float _float;
		double _double;
		std::string _in;	
		std::stringstream _sint;
		std::stringstream _sfloat;
		std::stringstream _schar;
		std::stringstream _sdouble;
};

#endif