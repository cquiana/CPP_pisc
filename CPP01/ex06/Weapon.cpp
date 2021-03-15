/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 08:28:02 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/15 07:07:39 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return;
}

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const &Weapon::getType()
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
