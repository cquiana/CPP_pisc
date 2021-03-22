/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 22:46:57 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 12:05:22 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include <unistd.h>

int		main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl << "===========<test>===========" << std::endl;
	ISpaceMarine* bill = bob->clone();
	ISpaceMarine* jack = jim->clone();
	Squad *copy = new Squad;
	Squad *tmp = new Squad;
	tmp->push(bill);
	tmp->push(jack);
	tmp->push(bill);
	*copy = *tmp;
	delete tmp;
	std::cout << "Units in squad: " << copy->getCount() << std::endl;
	for (int i = 0; i < copy->getCount(); ++i)
	{
		ISpaceMarine* cur = copy->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	delete copy;
	std::cout << "===========<end>===========" << std::endl;
	return 0;
}
