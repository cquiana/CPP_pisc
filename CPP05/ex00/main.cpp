/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:02:28 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/23 17:12:12 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bur1("Bill", 20);
		std::cout << bur1 << " created" << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat bur2("Donald", 0);
		std::cout << bur2 << " created" << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat bur3("John", 200);
		std::cout << bur3 << " created" << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat bur4("Kate", 1);
		std::cout << bur4 << " created" << std::endl;
		bur4.increment();
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat bur5("Julia", 150);
		std::cout << bur5 << " created" << std::endl;
		bur5.decrement();
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
