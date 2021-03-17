/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:58:55 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/17 07:59:15 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}
Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const int iValue)
{
	std::cout << "Int constructor called" << std::endl;
	int raw = 0;
	raw = iValue * (1 << this->_fracBits);
	this->setRawBits(raw);
	return;
}

Fixed::Fixed(const float fValue)
{
	std::cout << "Float constructor called" << std::endl;
	int raw = 0;
	raw = (int)roundf(fValue * (1 << this->_fracBits));
	this->setRawBits(raw);
	return;
}

Fixed &Fixed::operator= (const Fixed &old)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = old.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}


float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (1 << this->_fracBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPointValue / (1 << this->_fracBits));
}

std::ostream &operator<< (std::ostream &out, const Fixed &fValue)
{
	out << fValue.toFloat();
	return out;
}
