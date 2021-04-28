/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:53:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/28 14:09:51 by edal--ce         ###   ########.fr       */
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
	return *this;
}

void Converter::print()
{
	std::cout << "char : " << _schar.str() << std::endl;
	std::cout << "int : " << _sint.str() <<std::endl;
	std::cout << "float : " << _sfloat.str() << std::endl;
	std::cout << "double : " << _sdouble.str() <<std::endl;
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
	int cdone = 0;
	std::string nin;
	if (in_list(_in))
		return 0;
	if ((_in[0] > 31 && _in[0] < 48) || (_in[0] > 57 && _in[0] < 127) )
	{
		_schar << _in[0];
		int t = static_cast<int> (_in[0]); 
		nin += std::to_string(t);
		cdone = 1;
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
		_sdouble << "Impossible";
	}
	try 
	{
		float t = stof(nin);
		_sfloat << std::fixed << t << "f";	
	}
	catch(std::exception &e)
	{
		_sfloat << "Impossible";
	}
	try 
	{
		int t = stoi(nin);
		_sint << t;
		if (!cdone)
		{
			if (t >= 32 && t <= 126)
				_schar << (static_cast<char> (t));
			else
				_schar << "Non displayable";	
		}		
	}
	catch(std::exception &e)
	{
		_sint << "Non displayable";
		_schar << "Non displayable";
	}
	return 0;
}

