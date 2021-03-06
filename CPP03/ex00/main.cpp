/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:13:33 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 15:50:33 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	std::string enemy[5] = { "Destroyer", "Psycho", "Stalker", "Gladiator", "Wolf" };
	srand((time(NULL)));
	FragTrap ft("FragTrap");

	int i = rand() % 5;
	ft.beRepaired(120);
	ft.rangedAttack(enemy[i]);
	i = rand() % 5;
	ft.vaulthunter_dot_exe(enemy[i]);
	ft.meleeAttack(enemy[i]);
	ft.takeDamage(20);
	ft.takeDamage(100);
	ft.beRepaired(100);
	i = rand() % 5;
	ft.vaulthunter_dot_exe(enemy[i]);
	ft.vaulthunter_dot_exe(enemy[i]);
	return 0;
}
