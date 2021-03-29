/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:16:49 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 15:06:50 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_count = 0;
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &old)
{
	*this = old;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &old)
{
	if (this != &old)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i])
				delete _materia[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (old._materia[i])
				_materia[i] = old._materia[i]->clone();
			else
				_materia[i] = 0;
		}
		_count = old._count;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* someMateria)
{
	if (_count >= 3 || someMateria == 0)
		std::cout << "All 4 slots is full, or Materia is empty!" << std::endl;
	else
	{
		_materia[_count] = someMateria->clone();
		_count++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	std::cout << "Creating error!" << std::endl;
	return 0;
}
