/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:02:28 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/23 17:14:32 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// try
	// {
	// 	Form form1("Form", 50, 50);
	// 	std::cout << form1 << " created" << std::endl;
	// }
	// catch(std::exception& ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }
	std::cout << std::endl;
	try
	{
		Bureaucrat bur2("Donald", 60);
		std::cout << bur2 << " created" << std::endl;
		std::cout << std::endl;
		Form form2("Form", 50, 50);
		std::cout << form2 << "created" << std::endl;
		bur2.signForm(form2);
		// form2.beSigned(bur2);
		std::cout << form2;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
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
