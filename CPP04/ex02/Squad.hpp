/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:27:32 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 09:13:24 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class Squad : public ISquad
{
private:
	int				_count;
	ISpaceMarine	**_units;
public:
	Squad();
	virtual ~Squad();
	Squad(Squad const &old);
	Squad &operator=(Squad const &old);
	int getCount() const;
	ISpaceMarine* getUnit(int num) const;
	int push(ISpaceMarine* newUnit);
	bool isEmpty();
};

#endif
