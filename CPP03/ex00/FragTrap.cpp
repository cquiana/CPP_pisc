/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:15:53 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/17 17:53:41 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
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

FragTrap::~FragTrap(void)
{
	std::cout << RED << "FR4G-TP " << _name << " destroyed!" << RESET << std::endl;
	return;
}


void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << CYAN << "FR4G-TP " << _name << " attacks " << target  << " at range, causing " << _rangedAttackDamage << " points of damage!" << RESET << std::endl;

}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << CYAN << "FR4G-TP " << _name << " attacks " << target  << " at range, causing " << _meleeAttackDamage << " points of damage!" << RESET << std::endl;

}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << CYAN << "FR4G-TP " << _name << " took " << amount  << " points of damage!" << RESET << std::endl;

}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << CYAN << "FR4G-TP " << _name << " was repired on " << amount  << " points!" << RESET << std::endl;

}
