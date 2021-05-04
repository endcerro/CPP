/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:53:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/05/04 13:44:43 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Converter.hpp"


Converter::Converter(std::string av) : _in(av)
{
	for(int i = 0; i < 4; i++)
		_conv[i] = 0;
}

Converter::Converter(const Converter &c) : _in(c._in), _int(c._int),
_char(c._char), _float(c._float), _double(c._double)
{
	for(int i = 0; i < 4; i++)
		_conv[i] = c._conv[i];
}

Converter& Converter::operator=(const Converter &c)
{
	_in = c._in;
	_int = c._int;
	_float = c._float;
	_char = c._char;
	_double = c._double;
	for(int i = 0; i < 4; i++)
		_conv[i] = c._conv[i];
	return *this;
}

void Converter::print()
{
	std::cout << "char : " ;
	if (_conv[1] != 0)
		std::cout <<"\'" <<_char << "\'" << std::endl;
	else if (_conv[0] != 0 && (_int <= 31 || _int >= 127) && _int > 0 && _int < 127)
	{
		std::cout << "Non displayable" << std::endl;	
	}
	else 
	{
		std::cout << "Impossible" << std::endl;
	}
	std::cout << "int : ";
	if (_conv[0] != 0)
		std::cout << _int << std::endl;
	else
		std::cout << "Impossible" << std::endl;	
	std::cout << "float : ";
	if (_conv[2] != 0)
	{
		std::cout << std::fixed <<_float;
		if (_int == _float)
			std::cout << ".0";
		std::cout << "f" <<std::endl;
	}
	else
		std::cout << "Impossible" << std::endl;

	std::cout << "double : ";
	if (_conv[3] != 0)
		std::cout << _double << std::endl;
	else
		std::cout << "Impossible" << std::endl;
}

int specialNb(std::string &s)
{
	if ( s == "nanf" || s == "nan")
		return 1;
	else if ( s == "-inff" || s == "-inf")
		return 1;
	else if ( s == "+inff" || s == "inff"|| s == "+ inff" || s == "inf" || s == "+ inf" || s == "+inf")
	{
		s = "inf";
		return 1;
	}
	return 0;
}

int isChar(std::string &s)
{
	if (specialNb(s))
		return 0;
	if ((s[0] > 32 && s[0] < 48) ||(s[0] > 57 && s[0] < 127))
	{
		if ((s[0] == '+' || s[0] == '-') &&  (s[1] > 47 && s[1] < 58))
			return 0;
		else if (s[1] != 0)
			return -1; 
		return 1;
	}
	return 0;
}


bool Converter::flatConvert()
{
	int t = isChar(_in);
	if (t == 1)
	{
		std::ostringstream os;
		os << static_cast<int> (_in[0]);
		_in = os.str();
		_conv[0] = 1;
	}
	else if (t == -1)
		return 1;
	double d = atof(_in.c_str());
	_double = d;
	_conv[3] = 1;
	_float = static_cast<float> (d);
	_conv[2] = 1;
	_conv[0] = 1;
	if (_double > std::numeric_limits<int>::max() || _double < std::numeric_limits<int>::min() || isinf(d) || isnan(d))
		_conv[0] = 0;
	else
		_int = static_cast<int> (d);
	if (_int > 31 && _int < 127)
	{
		_char = static_cast<char> (d);
		_conv[1] = 1;
	}
	return 0;
}

