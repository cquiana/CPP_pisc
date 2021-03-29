/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:30:43 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 10:24:10 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>

void iter(T *ptr, size_t len, void (ft)(T & x))
{
	for (size_t i = 0; i < len; i++)
		ft(ptr[i]);
}

#endif
