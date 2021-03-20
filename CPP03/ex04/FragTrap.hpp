/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:10:53 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 13:55:22 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &fragTrap);
	~FragTrap(void);

	FragTrap &operator= (FragTrap const &fragTrap);
	void	vaulthunter_dot_exe(std::string const &target);
	unsigned int 	setHP();
	unsigned int	setMAXHP();
	unsigned int	setRangeAD();
	unsigned int	setArmorDR();
};

#endif
