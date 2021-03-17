/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:57:15 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/17 06:29:29 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_fracBits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &old);
	~Fixed(void);
	Fixed &operator= (const Fixed &old);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
