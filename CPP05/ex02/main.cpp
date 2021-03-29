/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:02:28 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 18:26:06 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));

	std::cout << "================= President ====================" << std::endl;
	try
	{
		Bureaucrat bur2("Donald", 1);
		std::cout << bur2 << std::endl;
		std::cout << std::endl;
		PresidentialPardonForm ppf("PPF");
		std::cout << ppf << " created" << std::endl;
		bur2.signForm(ppf);
		ppf.execute(bur2);
		std::cout << ppf;
		std::cout << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=============== Robot ==================" << std::endl;
	try
	{
		Bureaucrat bur2("Angela", 30);
		std::cout << bur2 << std::endl;
		std::cout << std::endl;
		RobotomyRequestForm rrf("RRF");
		std::cout << rrf << " created" << std::endl;
		bur2.signForm(rrf);
		std::cout << std::endl;
		rrf.execute(bur2);
		std::cout << std::endl;
		std::cout << rrf;
		std::cout << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "================ Shrubbery ====================" << std::endl;
	try
	{
		Bureaucrat bur2("Rudolf", 70);
		std::cout << bur2 << " created" << std::endl;
		std::cout << std::endl;
		ShrubberyCreationForm srf("SCRF");
		std::cout << srf << " created" << std::endl;
		bur2.signForm(srf);
		std::cout << std::endl;
		srf.execute(bur2);
		std::cout << srf;
		std::cout << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "=============== Unsigned ================" << std::endl;
	try
	{
		Bureaucrat bur2("Rudolf", 70);
		std::cout << bur2 << " created" << std::endl;
		std::cout << std::endl;
		ShrubberyCreationForm srf("SCRF");
		std::cout << srf << " created" << std::endl;
		srf.execute(bur2);
		std::cout << srf;
		std::cout << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "================= low to sign ===================" << std::endl;
	try
	{
		Bureaucrat bur2("Sam", 150);
		std::cout << bur2 << std::endl;
		std::cout << std::endl;
		PresidentialPardonForm ppf("PPF");
		std::cout << ppf << " created" << std::endl;
		bur2.signForm(ppf);
		ppf.execute(bur2);
		std::cout << ppf;
		std::cout << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	return 0;
}
