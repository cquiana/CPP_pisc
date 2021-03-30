/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:38:09 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 22:38:31 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <limits>
#include <math.h>

class Convert
{
private:
	std::string _str;
	std::stringstream _ss;

public:
	Convert();
	Convert(std::string str);
	Convert(Convert const &old);
	~Convert();

	Convert &operator=(Convert const &old);

	bool checkArgv();
	bool isFloat();
	bool isSpecial();
	bool isChar();
	void castToChar();
	void castToInt();
	void castToFloat();
	void castToDouble();
};

#endif
