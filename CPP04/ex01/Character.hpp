/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 19:14:36 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/21 22:30:54 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int			_ap;
	AWeapon*	_weapon;
public:
	Character();
	Character(std::string const &name);
	Character(Character const &old);
	Character &operator=(Character const &old);
	~Character();

	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);
	std::string const getName() const;
	int	getAP() const;
	AWeapon* getWeapon() const;
};

std::ostream &operator<<(std::ostream &os, Character const &character);

#endif
