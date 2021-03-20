/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 07:19:00 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 16:48:10 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	_hitPoints = FragTrap::setHP();
	_maxHintPoints = FragTrap::setMAXHP();
	_level = 1;
	_type = "SUPER-TP";
	_rangedAttackDamage = FragTrap::setRangeAD();
	_armorDamageReduction = FragTrap::setArmorDR();
	std::cout << "name " << _name << std::endl;
	std::cout << "HP " << _hitPoints << std::endl;
	std::cout << "maxHP " << _maxHintPoints << std::endl;
	std::cout << "EP " << _energyPoints << std::endl;
	std::cout << "maxEP " << _maxEnergyPoints << std::endl;
	std::cout << "meleeAD " << _meleeAttackDamage << std::endl;
	std::cout << "rangeAD " << _rangedAttackDamage << std::endl;
	std::cout << "armorDR " << _armorDamageReduction << std::endl;

	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	_hitPoints = FragTrap::setHP();
	_maxHintPoints = FragTrap::setMAXHP();
	_level = 1;
	_type = "SUPER-TP";
	_rangedAttackDamage = FragTrap::setRangeAD();
	_armorDamageReduction = FragTrap::setArmorDR();
	std::cout << GREEN  << _type << " " << _name << " created!" << RESET << std::endl;
	std::cout << "name " << _name << std::endl;
	std::cout << "HP " << _hitPoints << std::endl;
	std::cout << "maxHP " << _maxHintPoints << std::endl;
	std::cout << "EP " << _energyPoints << std::endl;
	std::cout << "maxEP " << _maxEnergyPoints << std::endl;
	std::cout << "meleeAD " << _meleeAttackDamage << std::endl;
	std::cout << "rangeAD " << _rangedAttackDamage << std::endl;
	std::cout << "armorDR " << _armorDamageReduction << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << RED << _type << " " << _name << " destroyed!" << RESET << std::endl;
	return;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	std::cout << YELLOW << _type << " " << _name << " attacks with FragTrap method" << RESET << std::endl;
	FragTrap::rangedAttack(target);
}
void	SuperTrap::meleeAttack(std::string const &target)
{
	std::cout << YELLOW << _type << " " << _name << " attacks with NinjaTrap method" << RESET << std::endl;
	NinjaTrap::meleeAttack(target);
}
