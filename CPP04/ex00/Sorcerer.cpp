/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:31:33 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 06:47:20 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("unnamed"), _title("noTitle")
{
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;

}

Sorcerer::Sorcerer(Sorcerer const &old)
{
	std::cout << "Copy constructor!" << std::endl;
	(*this) = old;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &old)
{
	std::cout  << "Assignation constructor!" << std::endl;
	_name = old._name;
	_title = old._title;
	return (*this);
}

std::string	const Sorcerer::getName() const
{
	return (_name);
}

std::string	const Sorcerer::getTitle() const
{
	return (_title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &sorcerer)
{
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}
