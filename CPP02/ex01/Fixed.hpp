/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:57:15 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/19 17:15:03 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_fracBits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &old);
	Fixed(const int iValue);
	Fixed(const float fValue);
	~Fixed(void);
	Fixed &operator= (const Fixed &old);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int	toInt(void) const;
};
	std::ostream &operator<< (std::ostream &out, const Fixed &fValue);

#endif
