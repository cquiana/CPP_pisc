/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:13:33 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 16:43:55 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	std::string enemy[5] = { "Destroyer", "Psycho", "Stalker", "Gladiator", "Wolf" };
	srand((time(NULL)));
	int i = rand() % 5;
	SuperTrap st("SuperTrap");

	std::cout << "=========================================" << std::endl;
	st.meleeAttack(enemy[i]);
	i = rand() % 5;
	std::cout << "=========================================" << std::endl;
	st.rangedAttack(enemy[i]);
	std::cout << "=========================================" << std::endl;
	return 0;
}
