/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 07:11:36 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/15 21:05:13 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;

public:
	HumanA(void);
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void attack(void) const;
};
#endif
