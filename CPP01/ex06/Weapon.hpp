/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 08:25:51 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/15 20:46:01 by cquiana          ###   ########.fr       */
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
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	std::string const	&getType();
	void	setType(std::string type);
};

#endif
