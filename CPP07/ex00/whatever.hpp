/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:39:34 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/30 12:21:39 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T1>
void swap(T1 &a, T1 &b)
{
	T1 buf = a;
	a = b;
	b = buf;
}

template <typename T2>
T2& max(T2 &a, T2 &b)
{
	return (a > b ? a : b);
}

template <typename T3>
T3& min(T3 &a, T3 &b)
{
	return (a < b ? a : b);
}

#endif
