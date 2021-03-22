/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:28:43 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 17:26:41 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &old);
	Cure &operator=(Cure const &old);
	virtual ~Cure();
	AMateria* clone() const;
	void use(ICharacter &target);
};

#endif
