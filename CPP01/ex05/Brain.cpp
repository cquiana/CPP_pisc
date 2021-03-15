/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 22:13:23 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/13 00:06:58 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_weigth = 1.4;
	this->_size = 2.1;
	return;
}

Brain::~Brain()
{
	return;
}

std::string Brain::identify(void)
{
	std::stringstream stream;
	stream << this;
	this->_addr = stream.str();
	return this->_addr;
}
