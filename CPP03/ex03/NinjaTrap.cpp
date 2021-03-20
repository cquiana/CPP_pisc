/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 23:04:20 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 16:50:40 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	_hitPoints = 60;
	_maxHintPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_type = "NINJ4-TP";
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 60;
	_maxHintPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_type = "NINJ4-TP";
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ninjaTrap)
{
	std::cout << GREEN  << "Copy constructor! "  << _type << RESET << std::endl;
	(*this) = ninjaTrap;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << RED << "NINJ4-TP " << _name << " destroyed!" << RESET << std::endl;
	return;
}

NinjaTrap &NinjaTrap::operator= (NinjaTrap const &ninjaTrap)
{
	std::cout << GREEN  << _type << "Assignation constructor!" << RESET << std::endl;
	_hitPoints = ninjaTrap._hitPoints;
	_maxHintPoints = ninjaTrap._maxHintPoints;
	_energyPoints = ninjaTrap._energyPoints;
	_maxEnergyPoints = ninjaTrap._maxEnergyPoints;
	_level = ninjaTrap._level;
	_name = ninjaTrap._name;
	_meleeAttackDamage = ninjaTrap._meleeAttackDamage;
	_rangedAttackDamage = ninjaTrap._rangedAttackDamage;
	_armorDamageReduction = ninjaTrap._armorDamageReduction;
	return (*this);
}
