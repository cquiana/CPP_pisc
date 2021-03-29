/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:29:54 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 15:04:25 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &old)
{
	*this = old;
}
Cure &Cure::operator=(Cure const &old)
{
	if (this != &old)
	{
		_type = old._type;
		_xp = old._xp;
	}
	return (*this);
}
AMateria* Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
