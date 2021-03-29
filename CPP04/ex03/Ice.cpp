/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:31:03 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 15:04:36 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &old)
{
	*this = old;
}
Ice &Ice::operator=(Ice const &old)
{
	if (this != &old)
	{
		_type = old._type;
		_xp = old._xp;
	}
	return (*this);
}
AMateria* Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
