/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <cquiana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:02:28 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/25 16:22:48 by cquiana          ###   ########.fr       */
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

	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}



	// std::cout << "===========================================" << std::endl;
	// try
	// {
	// 	Bureaucrat bur2("Donald", 1);
	// 	std::cout << bur2 << std::endl;
	// 	std::cout << std::endl;
	// 	PresidentialPardonForm ppf("PPF");
	// 	std::cout << ppf << "created" << std::endl;
	// 	bur2.signForm(ppf);
	// 	ppf.execute(bur2);
	// 	std::cout << ppf;
	// }
	// catch(std::exception& ex)
	// {
	// 	std::cerr << ex.what() << std::endl;
	// }

	// std::cout << "===========================================" << std::endl;
	// try
	// {
	// 	Bureaucrat bur2("Donald", 30);
	// 	std::cout << bur2 << " created" << std::endl;
	// 	std::cout << std::endl;
	// 	RobotomyRequestForm rrf("RRF");
	// 	std::cout << rrf << std::endl;
	// 	bur2.signForm(rrf);
	// 	std::cout << std::endl;
	// 	rrf.execute(bur2);
	// 	std::cout << std::endl;
	// 	std::cout << rrf;
	// }
	// catch(std::exception& ex)
	// {
	// 	std::cerr << ex.what() << std::endl;
	// }

	// std::cout << "===========================================" << std::endl;
	// try
	// {
	// 	Bureaucrat bur2("Donald", 70);
	// 	std::cout << bur2 << " created" << std::endl;
	// 	std::cout << std::endl;
	// 	ShrubberyCreationForm srf("SCRF");
	// 	std::cout << srf << std::endl;
	// 	bur2.signForm(srf);
	// 	std::cout << std::endl;
	// 	srf.execute(bur2);
	// 	std::cout << srf;
	// }
	// catch(std::exception& ex)
	// {
	// 	std::cerr << ex.what() << std::endl;
	// }

	// std::cout << std::endl;
	// try
	// {
	// 	Bureaucrat bur3(200,"John");
	// 	std::cout << bur3 << " created" << std::endl;
	// }
	// catch(std::exception& ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }
	// std::cout << std::endl;
	// try
	// {
	// 	Bureaucrat bur4(1,"Kate");
	// 	std::cout << bur4 << " created" << std::endl;
	// 	bur4.increment();
	// }
	// catch(std::exception& ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }
	// std::cout << std::endl;
	// try
	// {
	// 	Bureaucrat bur5(150,"Julia");
	// 	std::cout << bur5 << " created" << std::endl;
	// 	bur5.decrement();
	// }
	// catch(std::exception& ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }
	return 0;
}
