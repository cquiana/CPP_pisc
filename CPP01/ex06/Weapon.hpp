/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 08:25:51 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/15 07:07:55 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	std::string const	&getType();
	void	setType(std::string type);
};

#endif
