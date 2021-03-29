/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hobbit.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:31:06 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 14:48:04 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hobbit.hpp"

Hobbit::Hobbit(std::string name) : Victim(name)
{
	std::cout << "Never laugh at live dragons!" << std::endl;
}

Hobbit::Hobbit(Hobbit const &old) : Victim(old.getName())
{
	std::cout <<  "Copy constructor!" <<  std::endl;
	std::cout << "Never laugh at live dragons!" << std::endl;
	(*this) = old;
}

Hobbit::~Hobbit()
{
	std::cout << "I should not agree to..." << std::endl;
}

Hobbit &Hobbit::operator=(Hobbit const &old)
{
	std::cout  << "Assignation constructor!" << std::endl;
	if (this != &old)
		_name = old._name;
	return (*this);
}

std::string const Hobbit::getName() const
{
	return (_name);
}

void	Hobbit::getPolymorphed() const
{
	std::cout << _name << "  has been turned into a white rabbit!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Hobbit const &hobbit)
{
	os << "I am " << hobbit.getName() << " and I like beer!" << std::endl;
	return (os);
}
