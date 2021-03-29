/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:02:28 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/26 10:40:52 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	srand(time(NULL));

	std::cout << "===================PPF====================" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* ppf;
		Bureaucrat president("Zafod Beeblebrox", 5);
		ppf = someRandomIntern.makeForm("Presidential Pardon", "Student");
		president.signForm(*ppf);
		president.executeForm(*ppf);
		delete ppf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "===================RRF=====================" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat droid("R2D2", 30);
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
		droid.signForm(*rrf);
		droid.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "====================SCF====================" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* scf;
		Bureaucrat rudolf("Rudolf", 30);
		scf = someRandomIntern.makeForm("Shrubbery Creation", "Santa_Claus");
		rudolf.signForm(*scf);
		rudolf.executeForm(*scf);
		delete scf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "===================Error=====================" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Robotomy 2", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	return 0;
}
