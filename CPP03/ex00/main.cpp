/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:13:33 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/17 13:43:48 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap a;
	FragTrap b("New");

	b.rangedAttack("test");
	b.meleeAttack("test");
	b.takeDamage(20);
	b.beRepaired(10);

	return 0;
}
