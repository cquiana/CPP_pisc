/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:04:41 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 14:51:05 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
// #include <algorithm>
#include <set>

class Span
{
private:
	unsigned int _max;
	std::multiset<int> _mSet;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &old);
	Span &operator=(const Span &old);
	~Span();

	void addNumber(const int &data);
	void multiAddNumber(int *start, int *finish);
	int	shortestSpan();
	int	longestSpan();
	unsigned int getSize();

	class emptyContainer : public std::exception
		{
		public:
			virtual const char *what() const throw ()
			{
				return ("Multiset is empty or has one element!");
			}
		};

	class fullContainer : public std::exception
		{
		public:
			virtual const char *what() const throw ()
			{
				return ("Multiset is full!");
			}
		};
};

#endif
