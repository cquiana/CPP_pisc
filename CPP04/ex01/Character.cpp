/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 19:14:47 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 14:59:57 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::~Character()
{
}

Character::Character(std::string const &name) : _name(name), _ap(40)
{
}

Character::Character(Character const &old)
{
	*this = old;
}

Character &Character::operator=(Character const &old)
{
	if (this != &old)
	{
		_name = old._name;
		_ap = old._ap;
		_weapon = old._weapon;
	}
	return (*this);
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (!(_weapon))
		std::cout << _name << " is unarmed and can't attack enemy!" << std::endl;
	else
	{
		if (_ap < _weapon->getAPCost())
		{
			std::cout << _name << " can't uses " << _weapon->getName() << std::endl;
			return;
		}
		else
		{
			std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			_ap -= _weapon->getAPCost();
			if (_ap < _weapon->getAPCost())
				_ap = 0;
			enemy->takeDamage(_weapon->getDamage());
			if (enemy->getHP() == 0)
				delete enemy;
		}
	}
}

std::string const Character::getName() const
{
	return (_name);
}

int	Character::getAP() const
{
	return (_ap);
}
AWeapon* Character::getWeapon() const
{
	return (_weapon);
}

std::ostream &operator<<(std::ostream &os, Character const &character)
{
	if (!(character.getWeapon()))
		os << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	else
		os << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	return (os);
}
