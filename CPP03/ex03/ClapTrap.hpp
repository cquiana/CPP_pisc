/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:10:03 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 16:13:17 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

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

class ClapTrap
{
protected:
	unsigned int			_hitPoints;
	unsigned int			_maxHintPoints;
	unsigned int			_energyPoints;
	unsigned int			_maxEnergyPoints;
	unsigned int			_level;
	std::string				_name;
	std::string				_type;
	unsigned int			_meleeAttackDamage;
	unsigned int			_rangedAttackDamage;
	unsigned int			_armorDamageReduction;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &clapTrap);
	~ ClapTrap();

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	ClapTrap &operator= (ClapTrap const &ClapTrap);
	std::string	getName(void);
};


#endif
