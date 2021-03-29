/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:06:24 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 13:40:00 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
protected:
	std::string	_name;
	int			_apcost;
	int			_damage;
public:
	AWeapon();
	AWeapon(std::string const &name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(AWeapon const &old);
	AWeapon &operator=(AWeapon const &old);
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};


#endif
