/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:05:24 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 15:53:58 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_hitPoints = 100;
	_maxHintPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "default";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << GREEN  << "SC4V-TP " << _name << " created!" << RESET << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	_hitPoints = 100;
	_maxHintPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << GREEN  << "SC4V-TP " << _name << " created!" << RESET << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap)
{
	std::cout << GREEN  << "Copy constructor!" << RESET << std::endl;
	(*this) = scavTrap;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &scavTrap)
{
	std::cout << GREEN  << "Assignation constructor!" << RESET << std::endl;
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
	std::cout << RED << "SC4V-TP " << _name << " destroyed!" << RESET << std::endl;
	return;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	if (_energyPoints < _rangedAttackDamage)
	{
		std::cout << CYAN << "SC4V-TP " << _name << " can't attacks " << target  << " at range!" << RESET << std::endl;
		std::cout << BLUE << "SC4V-TP " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= _rangedAttackDamage;
		std::cout << CYAN << "SC4V-TP " << _name << " attacks " << target  << " at range, causing " << _rangedAttackDamage << " points of damage!" << RESET << std::endl;
		std::cout << BLUE << "SC4V-TP " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
	}
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	if (_energyPoints < _meleeAttackDamage)
	{
		std::cout << CYAN << "SC4V-TP " << _name << " can't attacks " << target  << " at range!" << RESET << std::endl;
		std::cout << BLUE << "SC4V-TP " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= _meleeAttackDamage;
		std::cout << CYAN << "SC4V-TP " << _name << " attacks " << target  << " at melee, causing " << _meleeAttackDamage << " points of damage!" << RESET << std::endl;
		std::cout << BLUE << "SC4V-TP " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
	}

}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << CYAN << "SC4V-TP " << _name << " took " << amount  << " points of damage!" << RESET << std::endl;
	if (_hitPoints > (amount - _armorDamageReduction))
	{
		_hitPoints -= (amount - _armorDamageReduction);
		std::cout << BLUE << "SC4V-TP " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
	else
	{
		_hitPoints = 0;
		std::cout << BLUE << "SC4V-TP " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoints + amount) <= _maxHintPoints)
	{
		_hitPoints += amount;
		std::cout << CYAN << "SC4V-TP " << _name << " was repired on " << amount  << " points!" << RESET << std::endl;
		std::cout << BLUE << "SC4V-TP " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
		return;
	}
	else
	{
		_hitPoints = _maxHintPoints;
		std::cout << MAGENTA << "SC4V-TP " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
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
	std::cout << YELLOW << "SC4V-TP " << _name << " " << challenge[i] << RESET << std::endl;
}
