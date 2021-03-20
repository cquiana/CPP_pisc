/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 08:13:33 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/20 16:20:42 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	ClapTrap ct("Parent");
	FragTrap ft("Ghost");
	ScavTrap st("Dumpy");
	NinjaTrap nt("Ninja");

	std::cout << "=========================================" << std::endl;
	nt.ninjaShoebox(ct);
	std::cout << "=========================================" << std::endl;
	nt.ninjaShoebox(ft);
	std::cout << "=========================================" << std::endl;
	nt.ninjaShoebox(st);
	std::cout << "=========================================" << std::endl;
	nt.ninjaShoebox(nt);
	std::cout << "=========================================" << std::endl;
	return 0;
}
