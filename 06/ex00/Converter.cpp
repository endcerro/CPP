/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:53:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/03 17:48:30 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Converter.hpp"


Converter::Converter(std::string av) : _in(av)
{
	for (int i = 0; i < 4; i++)
		_conv[i] = 0;
}

void Converter::print()
{
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
	int v = stoi(_in);
	_sint << v;
	_sfloat << v << ".0f";
	_sdouble << v << ".0";
	if (v >= 32 && v <= 126)
		_schar << static_cast<char>(v);
	else
		_schar << "Non displayable";
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
	
		_float = stof(_in);
		_int = static_cast<int>(_float);
		_double = static_cast<double>(_float);
		_char = static_cast<char>(_float);
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
		return 1;
	return 0;
}

bool Converter::isChar()
{
	int i = 0;
	if (_in.length() == 1 && _in[0] >= ' ' && _in[0] <= '~')
		return 1;
	return 0;
}