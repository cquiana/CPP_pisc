/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 21:31:49 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/12 22:08:05 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptrStr;
	std::string	&refStr = str;

	ptrStr = &str;
	std::cout << "strig = " << str << std::endl;
	std::cout << "pointer = " << *ptrStr << std::endl;
	std::cout << "strig = " << refStr << std::endl;
	return 0;
}
