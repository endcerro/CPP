/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:53:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/04 15:41:19 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Converter.hpp"


Converter::Converter(std::string av) : _in(av), _ok(0)
{
	// for (int i = 0; i < 4; i++)
	// 	_conv[i] = 0;
}

void Converter::print()
{
	if (!_ok)
		return;
	std::cout << "char : " << _schar.str() << std::endl;
	std::cout << "int : " << _sint.str() <<std::endl;
	std::cout << "float : " << _sfloat.str() << std::endl;
	std::cout << "double : " << _sdouble.str() <<std::endl;
}

bool Converter::isInt()
{
	int i = 0;
	for (int i = 0; i < _in.length() ;i++)
	{
		if (i == 0 && _in[i] == '-' && _in.length() > 1)
			continue;
		if ((_in[i] < '0' || _in[i] > '9'))
			return (0);
	}
	int d = 0;
	try 
	{
		d = stoi(_in);	
	}
	catch (std::exception &e)
	{
		std::cout << "Number is too big/small/not supported" << std::endl;
		return 1;
	}
	if (d > std::numeric_limits<int>::max())
		_sint << "Number is too big for int";
	else
		_sint << d;
	_sfloat << d << ".0f";
	_sdouble << d << ".0";
	if (d >= 32 && d <= 126)
		_schar << static_cast<char>(d);
	else
		_schar << "Non displayable";
	_ok = 1;
	return (1);
}

bool Converter::isFloat()
{
	int dn = 0;
	int fn = 0;
	for (int i = 0; i < _in.length() ;i++)
	{
		if (i == 0 && _in[i] == '-')
			continue;
		if (_in[i] == '.')
			dn++;
		else if (_in[i] == 'f')
		{
			if (i == _in.length() - 1)
				fn++;
			else
				return 0;
		}
		else if ((_in[i] < '0' || _in[i] > '9') && (i != 0 && i == '-'))
			return 0;
	}
	if (fn == 1)
	{	
		double v = stof(_in);
		_sfloat << v;
		if ( v - (static_cast<int>(v)) == 0)
			_sfloat << ".0";
		_sfloat << "f";
		if ( std::numeric_limits<int>::max() < v)
			_sint << "Non displayable";
		else if ( std::numeric_limits<int>::min() > v)
			_sint << "Non displayable";
		else if ()
		else
		{
			_sint << static_cast<int>(v);
		}
		_sdouble << v;
		if ( v - (static_cast<int>(v)) == 0)
			_sdouble << ".0";
		if (v >= 32 && v <= 126)
			_schar << static_cast<char>(v);
		else
			_schar << "Non displayable";
		_ok = 1;
		return 1;

	}
	return 0;
}

bool Converter::isDouble()
{
	int dn = 0;
	int fn = 0;
	for (int i = 0; i < _in.length() ;i++)
	{
		if (i == 0 && _in[i] == '-')
			continue;
		if (_in[i] == '.' && dn == 0)
			dn++;
		else if (_in[i] < '0' || _in[i] > '9')
			return 0;
	}
	if (dn == 1)
	{
		double v = stof(_in);
		_sfloat << v;
		if ( v - (static_cast<int>(v)) == 0)
			_sfloat << ".0";
		_sfloat << "f";
		if ( std::numeric_limits<int>::max() < v)
			_sint << "Non displayable";
		else
			_sint << static_cast<int>(v);
		_sdouble << v;
		if ( v - (static_cast<int>(v)) == 0)
			_sdouble << ".0";
		if (v >= 32 && v <= 126)
			_schar << static_cast<char>(v);
		else
			_schar << "Non displayable";
		_ok = 1;
		return 1;
	}
	return 0;
}

bool Converter::isChar()
{
	int i = 0;
	if (_in.length() == 1 && _in[0] >= ' ' && _in[0] <= '~')
	{
		int v = _in[0];
		_sfloat << v << ".0f";
		_sint << v;
		_sdouble << v << ".0";
		_schar << static_cast<char>(v);
		_ok = 1;
		return 1;
	}
	return 0;
}