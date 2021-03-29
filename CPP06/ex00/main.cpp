/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 18:17:21 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/27 17:41:05 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "Wrong count of argument!" << std::endl;
		return 1;
	}
	Convert input(av[1]);
	if (!input.checkArgv())
	{
		std::cout << "Invalid argument!" << std::endl;
		return 2;
	}
	input.castToChar();
	input.castToInt();
	input.castToFloat();
	input.castToDouble();
	return 0;
}
