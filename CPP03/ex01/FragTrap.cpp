/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:15:53 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 15:40:16 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_hitPoints = 100;
	_maxHintPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "default";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << GREEN  << "FR4G-TP " << _name << " created" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_hitPoints = 100;
	_maxHintPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << GREEN  << "FR4G-TP " << _name << " created" << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragTrap)
{
	std::cout << GREEN  << "Copy constructor!" << RESET << std::endl;
	(*this) = fragTrap;
}

FragTrap &FragTrap::operator= (FragTrap const &fragTrap)
{
	std::cout << GREEN  << "Assignation constructor!" << RESET << std::endl;
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
	std::cout << RED << "FR4G-TP " << _name << " destroyed!" << RESET << std::endl;
	return;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	if (_energyPoints < _rangedAttackDamage)
	{
		std::cout << CYAN << "FR4G-TP " << _name << " can't attacks " << target  << " at range!" << RESET << std::endl;
		std::cout << BLUE << "FR4G-TP " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= _rangedAttackDamage;
		std::cout << CYAN << "FR4G-TP " << _name << " attacks " << target  << " at range, causing " << _rangedAttackDamage << " points of damage!" << RESET << std::endl;
		std::cout << BLUE << "FR4G-TP " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
	}
}

void	FragTrap::meleeAttack(std::string const &target)
{
	if (_energyPoints < _meleeAttackDamage)
	{
		std::cout << CYAN << "FR4G-TP " << _name << " can't attacks " << target  << " at melee!" << RESET << std::endl;
		std::cout << BLUE << "FR4G-TP " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= _meleeAttackDamage;
		std::cout << CYAN << "FR4G-TP " << _name << " attacks " << target  << " at melee, causing " << _meleeAttackDamage << " points of damage!" << RESET << std::endl;
		std::cout << BLUE << "FR4G-TP " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
	}

}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << CYAN << "FR4G-TP " << _name << " took " << amount  << " points of damage!" << RESET << std::endl;
	if (_hitPoints > (amount - _armorDamageReduction))
	{
		_hitPoints -= (amount - _armorDamageReduction);
		std::cout << BLUE << "FR4G-TP " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
	else
	{
		_hitPoints = 0;
		std::cout << BLUE << "FR4G-TP " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoints + amount) <= _maxHintPoints)
	{
		_hitPoints += amount;
		std::cout << CYAN << "FR4G-TP " << _name << " was repired on " << amount  << " points!" << RESET << std::endl;
		std::cout << BLUE << "FR4G-TP " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
	else
	{
		_hitPoints = _maxHintPoints;
		std::cout << MAGENTA << "FR4G-TP " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	unsigned int 	i;
	std::string		attackPoll[5] = {"with a stick", "with a newspaper", "with a bottle", "with a hammer", "with dumb questions"};

	srand((time(NULL)));
	i = rand() % 5;
	if (_energyPoints >= 25)
	{
		std::cout << YELLOW << "FR4G-TP " << _name << " attack " << target  << " " << attackPoll[i] << RESET << std::endl;
		_energyPoints -= 25;
	}
	else
	{
		std::cout << MAGENTA << "FR4G-TP " << _name << " not enough energy!" << RESET << std::endl;
		std::cout << MAGENTA << "FR4G-TP " << _name << " has " << _energyPoints << " energy point" << RESET << std::endl;
	}
}

