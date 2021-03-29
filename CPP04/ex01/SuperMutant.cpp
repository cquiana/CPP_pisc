/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:39:50 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 15:01:43 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &old) : Enemy(170, "Super Mutant")
{
	*this = old;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}


SuperMutant &SuperMutant::operator=(SuperMutant const &old)
{
	if (this != &old)
	{
		_hp = old._hp;
		_type = old._type;
	}
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	if (damage >= 3)
		damage = 0;
	else
		damage -= 3;
	Enemy::takeDamage(damage);
}
