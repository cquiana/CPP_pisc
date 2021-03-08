/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 22:08:48 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/08 23:01:57 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int i = 1;
	int j = 0;

	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	} else {
		while (i < ac) {
			j = 0;
			while (av[i][j] != '\0') {
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << "\n";
	}
	return 0;
}
