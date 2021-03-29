/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 13:14:42 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 14:48:21 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	std::cout << "Some random victim called" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " <<_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim &old)
{
	std::cout <<  "Copy constructor!" <<  std::endl;
	(*this) = old;
}

Victim &Victim::operator=(Victim const &old)
{
	std::cout << "Assignation constructor!" <<  std::endl;
	if (this != &old)
		_name = old._name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string	const Victim::getName() const
{
	return (_name);
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &victim)
{
	os << "I am " << victim.getName() << " and I like otters!" << std::endl;
	return (os);
}
