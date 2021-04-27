/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:17:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/27 16:34:08 by edal--ce         ###   ########.fr       */
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
		Converter(const Converter &c);
		Converter& operator=(const Converter &c);
		~Converter() {}
		bool flatConvert();
		void print();
	private :
		const std::string _in;	
		std::stringstream _sint;
		std::stringstream _sfloat;
		std::stringstream _schar;
		std::stringstream _sdouble;
};

#endif