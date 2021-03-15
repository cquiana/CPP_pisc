/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:17:32 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/12 18:39:29 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>

Zombie* randomChump(void)
{
	int		rd = 0;
	Zombie	*newZ;

	rd = rand() % 10;
	std::string	names[10] = {"Sean", "Jack", "Tery", "Donald", "Ricky", \
							"John", "Sarah", "Candy", "Lina", "Kate"};
	newZ = new Zombie(names[rd], "random");
	return newZ;
}

int		main(void)
{
	Zombie		empty;
	Zombie 		zombieOnStack("Nick", "slow");
	Zombie		*zombOnHeap;
	Zombie		*randZombie;
	ZombieEvent	newEvent;

	std::cout << std::endl;
	srand(time(NULL));

	std::cout << "Zombie on stack(epmty)" << std::endl;
	empty.announce();

	std::cout << "Zombie on stack" << std::endl;
	zombieOnStack.announce();

	std::cout << "Zombie on heap" << std::endl;
	newEvent.setZombieType("fast");
	zombOnHeap = newEvent.newZombie("Mick");
	zombOnHeap->announce();

	std::cout << "Random Zombie on heap" << std::endl;
	std::cout << std::endl;
	randZombie = randomChump();
	randZombie->announce();

	std::cout << std::endl;
	delete zombOnHeap;
	delete randZombie;
	return 0;
}
