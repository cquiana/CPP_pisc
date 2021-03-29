/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:01:55 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 14:09:44 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <exception>


class emptyContainer : public std::exception
	{
	public:
		virtual const char *what() const throw ()
		{
			return ("Container is empty!");
		}
	};

class elementNotFound : public std::exception
	{
	public:
		virtual const char *what() const throw ()
		{
			return ("Element not found!");
		}
	};

template <typename T>
typename T::iterator easyfind(T &container, int data)
{
	typename T::iterator it;
	if (container.empty())
		throw emptyContainer();
	it = std::find(container.begin(), container.end(), data);
	if (it == container.end())
		throw elementNotFound();
	return (it);
}
#endif
