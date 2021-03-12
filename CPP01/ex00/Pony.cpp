/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 07:00:38 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/12 09:51:06 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int age, std::string name, std::string color)
{
	this->_age = age;
	this->_name = name;
	this->_color = color;
	std::cout << "Pony created" << std::endl;
	return;
}

Pony::~Pony(void)
{
	std::cout << "Pony deleted" << std::endl;
	return;
}

void Pony::getInfo(void)
{
	std::cout << this->_name << std::endl;
	std::cout << this->_age << std::endl;
	std::cout << this->_color << std::endl;
}
