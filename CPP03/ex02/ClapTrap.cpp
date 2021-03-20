/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:11:51 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 16:08:29 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_hitPoints = 120;
	_maxHintPoints = 120;
	_energyPoints = 70;
	_maxEnergyPoints = 70;
	_level = 1;
	_name = "default";
	_type = "CL4P-TP";
	_meleeAttackDamage = 25;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 7;
	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitPoints = 120;
	_maxHintPoints = 120;
	_energyPoints = 70;
	_maxEnergyPoints = 70;
	_level = 1;
	_type = "CL4P-TP";
	_meleeAttackDamage = 25;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 7;
	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrap)
{
	std::cout << GREEN  << "Copy constructor!" << RESET << std::endl;
	(*this) = clapTrap;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &clapTrap)
{
	std::cout << GREEN  << _type << "Assignation constructor!" << RESET << std::endl;
	_hitPoints = clapTrap._hitPoints;
	_maxHintPoints = clapTrap._maxHintPoints;
	_energyPoints = clapTrap._energyPoints;
	_maxEnergyPoints = clapTrap._maxEnergyPoints;
	_level = clapTrap._level;
	_name = clapTrap._name;
	_meleeAttackDamage = clapTrap._meleeAttackDamage;
	_rangedAttackDamage = clapTrap._rangedAttackDamage;
	_armorDamageReduction = clapTrap._armorDamageReduction;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << RED << "CL4P-TP " << _name << " destroyed!" << RESET << std::endl;
	return;
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	if (_energyPoints < _rangedAttackDamage)
	{
		std::cout << CYAN << _type << " " << _name << " can't attacks " << target  << " at range!" << RESET << std::endl;
		std::cout << BLUE << _type << " " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= _rangedAttackDamage;
		std::cout << CYAN << _type << " " << _name << " attacks " << target  << " at range, causing " << _rangedAttackDamage << " points of damage!" << RESET << std::endl;
		std::cout << BLUE << _type << " " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
	}
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	if (_energyPoints < _meleeAttackDamage)
	{
		std::cout << CYAN << _type << " " << _name << " can't attacks " << target  << " at range!" << RESET << std::endl;
		std::cout << BLUE << _type << " " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= _meleeAttackDamage;
		std::cout << CYAN << _type << " " << _name << " attacks " << target  << " at melee, causing " << _meleeAttackDamage << " points of damage!" << RESET << std::endl;
		std::cout << BLUE << _type << " " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
	}

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << CYAN << _type << " " << _name << " took " << amount  << " points of damage!" << RESET << std::endl;
	if (_hitPoints > (amount - _armorDamageReduction))
	{
		_hitPoints -= (amount - _armorDamageReduction);
		std::cout << BLUE << _type << " " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
	else
	{
		_hitPoints = 0;
		std::cout << BLUE << _type << " " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoints + amount) <= _maxHintPoints)
	{
		_hitPoints += amount;
		std::cout << CYAN << _type << " " << _name << " was repired on " << amount  << " points!" << RESET << std::endl;
		std::cout << BLUE << _type << " " << _name << " has " << _energyPoints << " energy point!" << RESET << std::endl;
		return;
	}
	else
	{
		_hitPoints = _maxHintPoints;
		std::cout << MAGENTA << _type << " " << _name << "'s HP is " << _hitPoints << RESET << std::endl;
	}
}

