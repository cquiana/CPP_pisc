/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:29:46 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 17:15:13 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _units(0)
{
}

Squad::~Squad()
{
	if (!_units)
		return;
	else
	{
		for (int i = 0; i < _count; i++)
			delete _units[i];
		delete [] _units;
	}
	std::cout << "The squad is disbanded!" << std::endl;
}

Squad::Squad(Squad const &old) : _count(0), _units(0)
{
	std::cout << "COPY!" << std::endl;
	*this = old;
}

Squad &Squad::operator=(Squad const &old)
{
	if (this != &old)
	{
		if (_units)
		{
			for (int i = 0; i < _count; i++)
				delete _units[i];
			delete [] _units;
			_units = 0;
		}
		_count = old._count;
		ISpaceMarine **newSqaud = new ISpaceMarine * [_count];
		for (int i = 0; i < _count; i++)
			newSqaud[i] = old._units[i]->clone();
		_units = newSqaud;
	}
	return (*this);
}

int Squad::getCount() const
{
	return (_count);
}

ISpaceMarine* Squad::getUnit(int num) const
{
	if (num < 0 || num >= _count || _count == 0)
		return (0);
	else
		return (_units[num]);
}

bool Squad::isEmpty()
{
	if (_count == 0)
		return (true);
	else
		return (false);
}

int Squad::push(ISpaceMarine* newUnit)
{
	if (!newUnit)
		return (_count);
	else
	{
		for (int i = 0; i < _count; i++)
		{
			if (newUnit == _units[i])
				return (_count);
		}
	}
	ISpaceMarine **tmp = new ISpaceMarine * [_count + 1];
	for (int i = 0; i < _count; i++)
		tmp[i] = _units[i];
	tmp[_count] = newUnit;
	if (!isEmpty())
		delete [] _units;
	_units = tmp;
	_count++;
	return (_count);
}
