/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:25:53 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 15:03:49 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("no type"), _xp(0)
{
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const &old)
{
	*this = old;
}
AMateria &AMateria::operator=(AMateria const &old)
{
	if (this != &old)
	{
		_type = old._type;
		_xp = old._xp;
	}
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const //Returns the materia type
{
	return (_type);
}

unsigned int AMateria::getXP() const //Returns the Materia's XP
{
	return (_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}
