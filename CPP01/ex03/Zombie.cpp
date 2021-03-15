/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:45:46 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/12 21:19:35 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie " << this->_name << " is born" << std::endl;
	return;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "Zombie " << this->_name << " is born" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is die" << std::endl;
	return;
}

void Zombie::setInfo(void)
{
	int		rName = 0;
	int		rType = 0;
	std::string	names[10] = {"Sean", "Jack", "Tery", "Donald", "Ricky", \
							"John", "Sarah", "Candy", "Lina", "Kate"};
	std::string	types[5] = {"stand", "slow", "regular", "fast", "flash"};

	rName = rand() % 10;
	rType = rand() % 5;
	this->_name = names[rName];
	this->_type = types[rType];
}

void Zombie::announce(void)
{
	std::cout << "<" + this->_name + " (" + this->_type + ")> Braiiiiiiinnnssss..." << std::endl;
}
