/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 22:08:48 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/10 18:48:00 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int i = 1;
	int j = 0;

	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		while (i < ac) {
			j = 0;
			while (av[i][j] != '\0') {
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
			// if (i != ac)
			// 	std::cout << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
