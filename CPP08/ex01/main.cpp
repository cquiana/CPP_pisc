/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:24:07 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 14:10:51 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "====== subject test ======" << std::endl << std::endl;

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "====== test 10000 ======" << std::endl << std::endl;

	Span span(10000);
	int *arr = new int [10000];
	for (int i = 0; i < 10000; ++i)
	{
		arr[i] = i * 3;
	}
	try
	{
		span.multiAddNumber(arr, arr + 10000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what()  << std::endl;
	}
	try
	{
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "====== test 10000 ++ ======" << std::endl << std::endl;
	try
	{
		span.addNumber(7);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span sp3;
	std::cout << std::endl;
	std::cout << "====== test empty ======" << std::endl << std::endl;
	try
	{
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span sp4(5);
	sp4.addNumber(21);
	std::cout << std::endl;
	std::cout << "====== test one elemett ======" << std::endl << std::endl;
	try
	{
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	delete [] arr;
	return 0;
}
