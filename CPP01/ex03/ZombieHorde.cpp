/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:39:08 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/12 21:27:26 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _N(n)
{
	std::cout << "ZombieHorde created!" << std::endl;
	srand(time(NULL));
	this->_zombie = new Zombie[n];
	for (int i = 0; i < _N; i++){
		this->_zombie[i].setInfo();
	}
	return;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->_zombie;
	std::cout << "ZombieHorde is dead" << std::endl;
	return;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_N; i++){
		_zombie[i].announce();
	}
}
