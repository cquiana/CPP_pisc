/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:15:53 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 15:56:49 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_maxHintPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_type = "FR4G-TP";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_maxHintPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_type = "FR4G-TP";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragTrap)
{
	std::cout << GREEN  << "Copy constructor!" << RESET << std::endl;
	(*this) = fragTrap;
}

FragTrap &FragTrap::operator= (FragTrap const &fragTrap)
{
	std::cout << GREEN  << _type << "Assignation constructor!" << RESET << std::endl;
	_hitPoints = fragTrap._hitPoints;
	_maxHintPoints = fragTrap._maxHintPoints;
	_energyPoints = fragTrap._energyPoints;
	_maxEnergyPoints = fragTrap._maxEnergyPoints;
	_level = fragTrap._level;
	_name = fragTrap._name;
	_meleeAttackDamage = fragTrap._meleeAttackDamage;
	_rangedAttackDamage = fragTrap._rangedAttackDamage;
	_armorDamageReduction = fragTrap._armorDamageReduction;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << RED << _type << " " << _name << " destroyed!" << RESET << std::endl;
	return;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	unsigned int 	i = 0;
	std::string		attackPoll[5] = {"with a stick", "with a newspaper", "with a bottle", "with a hammer", "with dumb questions"};

	srand((time(NULL)));
	i = rand() % 5;
	if (_energyPoints >= 25)
	{
		std::cout << YELLOW << _type << " " << _name << " attack " << target  << " " << attackPoll[i] << RESET << std::endl;
		_energyPoints -= 25;
	}
	else
		std::cout << MAGENTA << _type << " " << _name << " has " << _energyPoints << " energy point" << RESET << std::endl;
}

