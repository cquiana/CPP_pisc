/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:13:33 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 15:52:26 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	std::string enemy[5] = { "Destroyer", "Psycho", "Stalker", "Gladiator", "Wolf" };
	FragTrap ft("Ghost");
	ScavTrap st("Dumpy");

	srand((time(NULL)));
	int i = rand() % 5;
	ft.meleeAttack(enemy[i]);
	st.takeDamage(30);
	i = rand() % 5;
	st.meleeAttack(enemy[i]);
	ft.takeDamage(20);
	st.beRepaired(10);
	ft.beRepaired(5);
	st.challengeNewcomer();

	return 0;
}
