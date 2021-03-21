/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:17:29 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/21 16:22:44 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}
AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &old)
{
	(*this) = old;
}

AWeapon &AWeapon::operator=(AWeapon const &old)
{
	_name = old._name;
	_apcost = old._apcost;
	_damage = old._damage;
	return (*this);
}

std::string const AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_apcost);
}
int AWeapon::getDamage() const
{
	return (_damage);
}
