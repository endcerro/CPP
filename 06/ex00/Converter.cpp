/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:53:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/27 16:48:55 by edal--ce         ###   ########.fr       */
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
	_sint.str(c._sint.str());
	_sfloat.str(c._sfloat.str());
	_schar.str(c._schar.str());
	_sdouble.str(c._sdouble.str());
	// _sint << (c._sint.str());
	// _sfloat << (c._sfloat.str());
	// _schar << (c._sfloat.str());
	// _sdouble << (c._sdouble.str());
	return *this;
}

void Converter::print()
{
	std::cout << "char : " << _schar.str() << std::endl;
	std::cout << "int : " << _sint.str() <<std::endl;
	std::cout << "float : " << _sfloat.str() << std::endl;
	std::cout << "double : " << _sdouble.str() <<std::endl;
}

bool Converter::flatConvert()
{
	std::string nin;
	if (_in[0] > 31 && _in[0] < 48 && _in[0] > 57 && _in[0] < 127 )
	{
		_schar << _in[0];
		int t = static_cast<int> (_in[0]); 
		nin += std::to_string(t);
	}
	else
		nin =_in;
	try 
	{
		double t = stod(nin);
		_sdouble << std::fixed << t;
	}
	catch(std::exception &e)
	{
		_sdouble << "Too big or too small for type";
	}
	try 
	{
		float t = stof(nin);
		_sfloat << std::fixed << t << "f";	
	}
	catch(std::exception &e)
	{
		_sfloat << "Too big or too small for type";
	}
	try 
	{
		int t = stoi(nin);
		_sint << t;
		if (t >= 32 && t <= 126)
			_schar << (static_cast<char> (t));
		else
			_schar << "Non displayable";
	}
	catch(std::exception &e)
	{
		_sint << "Non displayable";
		_schar << "Non displayable";
	}
	return 0;
}

