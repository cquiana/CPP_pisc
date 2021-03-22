/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:30:22 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 17:25:34 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &old);
	Ice &operator=(Ice const &old);
	virtual ~Ice();
	AMateria* clone() const;
	void use(ICharacter &target);
};


#endif
