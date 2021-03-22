/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:01:53 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 09:31:43 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &old)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = old;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &old)
{
	(void) old;
	return (*this);
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine* copy = new TacticalMarine(*this);
	return(copy);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
