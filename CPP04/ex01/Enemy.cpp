/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:30:42 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 15:00:21 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{

}

Enemy::~Enemy()
{

}

Enemy::Enemy(Enemy const &old)
{
	*this = old;
}

Enemy &Enemy::operator=(Enemy const &old)
{
	if (this != &old)
	{
		_hp = old._hp;
		_type = old._type;
	}
	return (*this);
}

std::string const Enemy::getType() const
{
	return _type;
}
int Enemy::getHP() const
{
	return _hp;
}
void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	else
	{
		if (_hp <= damage)
			_hp = 0;
		else
			_hp -= damage;
	}
	std::cout << getType() << " has " << getHP() << " HP" << std::endl;
}
