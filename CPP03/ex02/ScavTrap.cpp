/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:05:24 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 16:45:51 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_maxHintPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_type = "SC4V-TP";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_maxHintPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_type = "SC4V-TP";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap)
{
	std::cout << GREEN  << "Copy constructor!" << RESET << std::endl;
	(*this) = scavTrap;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &scavTrap)
{
	std::cout << GREEN << _type  << "Assignation constructor!" << RESET << std::endl;
	_hitPoints = scavTrap._hitPoints;
	_maxHintPoints = scavTrap._maxHintPoints;
	_energyPoints = scavTrap._energyPoints;
	_maxEnergyPoints = scavTrap._maxEnergyPoints;
	_level = scavTrap._level;
	_name = scavTrap._name;
	_meleeAttackDamage = scavTrap._meleeAttackDamage;
	_rangedAttackDamage = scavTrap._rangedAttackDamage;
	_armorDamageReduction = scavTrap._armorDamageReduction;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << _type << " " << _name << " destroyed!" << RESET << std::endl;
	return;
}

void	ScavTrap::challengeNewcomer(void)
{
	int i = 0;
	std::string	challenge[] = {
		"repairs Lada 2110",
		"cross the MKAD",
		"survive on 1000 rubles a week",
		"shaves the cat",
		"blocks Telegram in Russia",
	};
	srand(time(NULL));
	i = rand() % 5;
	std::cout << YELLOW << _type << " " << _name << " " << challenge[i] << RESET << std::endl;
}
