/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:45:46 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/16 12:46:35 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
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

void Zombie::announce(void)
{
	std::cout << "<" + this->_name + " (" + this->_type + ")> Braiiiiiiinnnssss..." << std::endl;
}
