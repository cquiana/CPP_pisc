/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:39:20 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/30 09:46:24 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
}
Convert::Convert(std::string str) : _str(str)
{
}

Convert::~Convert()
{
}

Convert::Convert(Convert const &old)
{
	*this = old;
}
Convert &Convert::operator=(Convert const &old)
{
	if (this != &old)
		_str = old._str;
	return (*this);
}

bool	Convert::checkArgv()
{
	if (_str.size() == 1 || _str == "nan" || _str == "nanf" || _str == "+inf" ||
		_str == "-inf" || _str == "+inff" || _str == "-inff")
		return true;
	if (_str.size() > 1 && (_str[0] != '-' && (_str[0] < 48 || _str[0] > 57)))
		return false;
	if (_str.size() > 1 && _str[0] == 'f')
		return false;
	int sign = 0, fl = 0, dot = 0;
	for (size_t i = 0; i < _str.size(); i++)
	{
		if  (_str[i] == '-')
			sign++;
		else if  (_str[i] == '.')
			dot++;
		else if  (_str[i] == 'f')
			fl++;
		else if (_str[i] < 48 || _str[i] > 57)
				return false;
	}
	if (sign >= 2 || dot >= 2 || fl >= 2)
		return false;
	return true;
}

bool Convert::isFloat()
{
	if (_str == "nanf" || _str == "+inff" || _str == "-inff" || (_str.find('.') != std::string::npos && _str[_str.size() - 1] == 'f'))
		return true;
	else
		return false;
}

bool Convert::isSpecial()
{
	if (_str == "nan" || _str == "nanf" || _str == "+inf" ||
		_str == "-inf" || _str == "+inff" || _str == "-inff")
		return true;
	else
		return false;
}

bool Convert::isChar()
{
	if (_str.size() == 1 && !isdigit(_str[0]))
		return true;
	else
		return false;
}

void	Convert::castToChar()
{
	std::cout << "Char: ";
	double value;
	if (isChar())
	{
		value = _str[0];
		if (value < 32 || value > 126)
			std::cout << "not displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(value)<< "'" << std::endl;
		return;
	}
	if (isSpecial())
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (isFloat())
		_ss << _str.substr(0, _str.size() - 1);
	else
		_ss << _str;
	_ss >> value;
	if (value < 0 || value > 127)
		std::cout << "impossible";
	else if (value < 32 || value > 126)
		std::cout << "not displayable";
	else
		std::cout << "'" << static_cast<char>(value)<< "'";
	std::cout << std::endl;
}

void	Convert::castToInt()
{
	std::cout << "Int: ";
	double value;
	if (isChar())
	{
		value = _str[0];
		std::cout << static_cast<int>(value) << std::endl;
		return;
	}
	if (isSpecial())
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (isFloat())
		_ss << _str.substr(0, _str.size() - 1);
	else
		_ss << _str;
	_ss >> value;
	if (value < INT_MIN || value > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void	Convert::castToFloat()
{
	std::cout << "Float: ";
	double value;
	if (isChar())
	{
		value = _str[0];
		std::cout  << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
		return;
	}
		if (isFloat())
			_ss << _str.substr(0, _str.size() - 1);
		else
			_ss << _str;
		_ss >> value;
		std::cout  << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
}

void	Convert::castToDouble()
{
	std::cout << "Double: ";
	double value;
	if (isChar())
	{
		value = _str[0];
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
		return;
	}
	if (isFloat())
		_ss << _str.substr(0, _str.size() - 1);
	else
		_ss << _str;
	_ss >> value;
		std::cout  << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}
