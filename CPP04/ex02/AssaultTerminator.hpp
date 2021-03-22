/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 06:57:08 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 07:06:16 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"


class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &old);
	AssaultTerminator &operator=(AssaultTerminator const &old);
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
