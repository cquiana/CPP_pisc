/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:18:19 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 17:37:37 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const &old);
	AMateria &operator=(AMateria const &old);
	virtual ~AMateria();
	std::string const &getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
