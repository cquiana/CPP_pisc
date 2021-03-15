/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:22:39 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/12 23:03:25 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*
**==========================
**         Colors
**==========================
*/

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"

int		main(void)
{
	std::cout << RED << "red" << std::endl << RESET;
	std::cout << GREEN << "green" << std::endl << RESET;
	std::cout << YELLOW << "yellow" << std::endl << RESET;
	std::cout << CYAN << "cyan" << std::endl << RESET;
	std::cout << "\033[1;34m" << "rand" << std::endl << RESET;
	std::cout << "\033[1;35m" << "rand" << std::endl << RESET;
	std::cout << "\033[1;37m" << "rand" << std::endl << RESET;




	return 0;
}
