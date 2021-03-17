/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 07:36:31 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/17 14:58:33 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamEditor.hpp"

int		main(int ac, char **av)
{
	SreamEditor sed;
	std::string str;

	if (ac != 4)
	{
		std::cout << "Error: count of arguments!" << std::endl;
		return 1;
	}
	sed.setParam(av[1], av[2], av[3]);
	if (!sed.validate())
	{
		std::cout << "Error: Empty second parametr!" << std::endl;
		return 2;
	}
	if (!sed.openInputFile())
	{
		std::cout << "Error: Input file can't open" << std::endl;
		return 4;
	}
	str = sed.getStr();
	if (str == "")
	{
		std::cout << "Error: File is empty!" << std::endl;
		return 3;
	}
	if (!sed.openOutnputFile())
	{
		std::cout << "Error: Output file can't open" << std::endl;
		return 5;
	}
	sed.findAndReplace(str);
	sed.writeToRep(str);
	sed.closeFile();
	return (0);
}
