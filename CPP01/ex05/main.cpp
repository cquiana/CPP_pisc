/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 22:08:13 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/15 09:07:35 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// stringstream::str
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream, std::stringbuf
#include "Human.hpp"

int	main(void)
{

	Human adam;
	std::cout << adam.identify() << std::endl;
	std::cout << adam.getBrain().identify() << std::endl;

	Human adam;
	std::cout << adam.identify() << std::endl;
	std::cout << adam.getBrain().identify() << std::endl;
	return 0;
}
