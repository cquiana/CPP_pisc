/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 07:12:31 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/12 15:11:15 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	ponyStack(3, "Sam", "black");
	ponyStack.getInfo();
}

void	ponyOnTheHeap(void)
{
	Pony	*ponyHeap = new Pony(5, "Kate", "white");
	ponyHeap->getInfo();
	delete ponyHeap;
}

int		main(void)
{
	std::cout << "Pony on stack" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	std::cout << "Pony on heap" << std::endl;
	ponyOnTheHeap();
	return 0;
}
