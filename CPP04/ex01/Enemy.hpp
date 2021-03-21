/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:26:12 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/21 18:35:13 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>
#include <string>

class Enemy
{
private:
	int			_hp;
	std::string	_type;
public:
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	Enemy(Enemy const &old);
	Enemy &operator=(Enemy const &old);
	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};

#endif
