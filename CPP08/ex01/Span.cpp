/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:06:21 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 17:36:01 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : _max(N), _mSet()
{
}

Span::~Span()
{
	if (!_mSet.empty())
		_mSet.clear();
}

Span::Span(const Span &old)
{
	*this = old;
}

Span &Span::operator=(const Span &old)
{
	if (this != &old)
	{
		_max = old._max;
		_mSet = old._mSet;
	}
	return (*this);
}

void Span::addNumber(const int &data)
{
	if (_mSet.size() == _max)
		throw fullContainer();
	_mSet.insert(data);
}

void Span::multiAddNumber(int *start, int *finish)
{
	if (finish - start > static_cast<int>(_max - _mSet.size()))
		throw fullContainer();
	_mSet.insert(start,finish);
}

int	Span::shortestSpan()
{
	int res = INT_MAX;
	if (_mSet.empty() || _mSet.size() == 1)
		throw emptyContainer();
	std::multiset<int>::iterator it = _mSet.begin();
	std::multiset<int>::iterator it2 = _mSet.end();
	--it2;
	for (; it != it2; ++it)
	{
		if (res > *(++it) - *(--it))
			res = *(++it) - *(--it);
	}
	return (res);
}

int	Span::longestSpan()
{
	int res = 0;
	if (_mSet.empty() || _mSet.size() == 1)
		throw emptyContainer();
	std::multiset<int>::iterator it1 = _mSet.begin();
	std::multiset<int>::iterator it2 = _mSet.end();
	it2--;
	res = *it2 - *it1;
	return (res);
}

unsigned int Span::getSize()
{
	return (_mSet.size());
}
