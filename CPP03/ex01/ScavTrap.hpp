/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 19:05:12 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 15:54:06 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

/*
**         Colors
*/

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"

#include <iostream>
#include <string>

class ScavTrap
{
private:
	unsigned int			_hitPoints;
	unsigned int			_maxHintPoints;
	unsigned int			_energyPoints;
	unsigned int			_maxEnergyPoints;
	unsigned int			_level;
	std::string	_name;
	unsigned int			_meleeAttackDamage;
	unsigned int			_rangedAttackDamage;
	unsigned int			_armorDamageReduction;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &scavTrap);
	~ScavTrap();
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	ScavTrap &operator= (ScavTrap const &scavTrap);
	void	challengeNewcomer(void);
};

#endif
