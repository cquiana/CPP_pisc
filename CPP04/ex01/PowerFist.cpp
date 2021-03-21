/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:34:59 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/21 17:46:34 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &old)
{
	*this = old;
}

PowerFist::~PowerFist()
{
}


void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
