/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:02:28 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 17:45:47 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "===== normal =====" << std::endl;
	try
	{
		Form form1("+new form+", 1, 150);
		std::cout << form1 << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "===== low =====" << std::endl;
	try
	{
		Form form1("+new form 151+", 151, 50);
		std::cout << form1 << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "===== high =====" << std::endl;
	try
	{
		Form form1("+new form 0+", 0, 50);
		std::cout << form1 << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "===== normal to sign =====" << std::endl;
	try
	{
		Bureaucrat bur2("Jim", 30);
		std::cout << bur2 << " created" << std::endl;
		Form form2("+new form 32+", 50, 50);
		std::cout << form2 << " created" << std::endl;
		bur2.signForm(form2);
		std::cout << form2;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "===== low to sign =====" << std::endl;
	try
	{
		Bureaucrat bur2("Donald", 60);
		std::cout << bur2 << " created" << std::endl;
		Form form2("+new form 86+", 50, 50);
		std::cout << form2 << " created" << std::endl;
		bur2.signForm(form2);
		std::cout << form2;
		std::cout << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
