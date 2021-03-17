/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:53:53 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/16 12:46:33 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->_type = "slow";
	return;
}

ZombieEvent::~ZombieEvent(void)
{
	return;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *newZombie =  new Zombie(name, this->_type);
	return newZombie;
}
