/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:17:32 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/15 20:39:37 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>

int		main(void)
{
	int n = 0;

	std::cout << "Input size of horde: ";
	std::cin >> n;

	srand(time(NULL));
	ZombieHorde horde(n);
	horde.announce();
	return 0;
}
