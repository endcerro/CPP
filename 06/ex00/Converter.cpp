/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:53:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/28 14:19:47 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Converter.hpp"


Converter::Converter(std::string av) : _in(av)
{}

Converter::Converter(const Converter &c) : _in(c._in), _sint(c._sint.str()), _sfloat(c._sfloat.str()),
_schar(c._schar.str()), _sdouble(c._sdouble.str())
{}

Converter& Converter::operator=(const Converter &c)
{
	_in = c._in;
	_sint.str(c._sint.str());
	_sfloat.str(c._sfloat.str());
	_schar.str(c._schar.str());
	_sdouble.str(c._sdouble.str());
	return *this;
}

void Converter::print()
{
	std::cout << "char : " << _char << std::endl;
	std::cout << "int : " << _int <<std::endl;
	std::cout << "float : " << _float << "f" << std::endl;
	std::cout << "double : " << _double <<std::endl;
}

bool Converter::in_list(std::string s)
{
	// std::cout << "|" << s << "|" << std::endl;
	if (s.compare("+inff") == 0 || s.compare("+inf") == 0)
	{
		_schar << "Impossible";
		_sint << "Impossible";
		_sfloat << "inff";
		_sdouble << "inf";
		return 1;
	}
	else if (s.compare("-inff") == 0 || s.compare("-inf") == 0)
	{
		_schar << "Impossible";
		_sint << "Impossible";
		_sfloat << "-inff";
		_sdouble << "-inf";
		return 1;
	}
	else if (s.compare("nanf") == 0 || s.compare("nan") == 0)
	{
		_schar << "Impossible";
		_sint << "Impossible";
		_sfloat << "nanf";
		_sdouble << "nan";

		return 1; 
	}
	return 0;
}


bool Converter::flatConvert()
{
	double d = atof(_in.c_str());
	std::cout << d << std::endl;
	_double = d;
	_float = static_cast<float> (d);
	_int = static_cast<int> (d);
	_char = static_cast<char> (d);
	return 0;
}

