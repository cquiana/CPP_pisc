/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:08:44 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/16 11:35:41 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}

Brain&	Human::getBrain(void)
{
	return this->_brain;
}

std::string Human::identify(void)
{
	return this->getBrain().identify();
}
