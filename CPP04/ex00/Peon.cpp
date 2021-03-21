/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 13:51:15 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/21 14:54:11 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zig zog." << std::endl;
}

Peon::Peon(Peon const &old) : Victim(old.getName())
{
	std::cout <<  "Copy constructor!" <<  std::endl;
	std::cout << "Zig zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon const &old)
{
	std::cout  << "Assignation constructor!" << std::endl;
	_name = old._name;
	return(*this);
}

void Peon::getPolymorphed() const
{
	std::cout << _name << "  has been turned into a pink pony!" << std::endl;
}

std::string const Peon::getName() const
{
	return (_name);
}

std::ostream &operator<<(std::ostream &os, Peon const &peon)
{
	os << "I am " << peon.getName() << " and I like icecream!" << std::endl;
	return (os);
}
