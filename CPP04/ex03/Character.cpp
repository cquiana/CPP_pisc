/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:26:22 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 17:50:29 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Noname")
{
	for (int i = 0; i < 4; i++)
		_bag[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_bag[i])
			delete _bag[i];
		_bag[i] = 0;
	}
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_bag[i] = 0;
}

Character::Character(Character const &old)
{
	*this = old;
}

Character &Character::operator=(Character const &old)
{
	if (this != &old)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_bag[i])
				delete _bag[i];
		}
		for (int i = 0; i < 4; i++)
		{
			_bag[i] = old._bag[i]->clone();
		}
		_name = old._name;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (m == 0)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (_bag[i] == 0)
		{
			_bag[i] = m;
			std::cout << "New materia " << m->getType() << " in bag!" << std::endl;
			return;
		}
	}
	std::cout << "Bag is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong index #" << idx << std::endl;
		return;
	}
	if (_bag[idx] == 0)
	{
		std::cout << "Materia with index " << idx << " already not in bag!" << std::endl;
		return;
	}
	if (_bag[idx] != 0)
	{
		_bag[idx] = 0;
		std::cout << "Materia with index " << idx << " unequiped!" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong index #" << idx << std::endl;
		return;
	}
	if (_bag[idx] != 0)
		_bag[idx]->use(target);
	else
		std::cout << "Materia with index " << idx << " not found in bag!" << std::endl;
}
