/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 07:29:24 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 10:17:01 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Array.hpp"

int main()
{
	Array<int> a(5);
	std::cout << std::endl;
	std::cout << "====== test 1 ======"<< std::endl;
	std::cout << "Size of array = " << a.size() << std::endl;
	for (size_t i = 0; i < a.size(); i++)
	{
		a.setData(i, i);
	}
	std::cout << std::endl;
	std::cout << "====== Print data ======"<< std::endl;
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << "#" << i << " = " << a[i] << std::endl;
	}
	try
	{
		std::cout << "#" << 15 << " = " << a[15] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Array<int> b(a);
	std::cout << "Size of array = " << b.size() << std::endl;
	b.setData(0, 5);
	std::cout << std::endl;
	std::cout << "====== Print data 2 ======"<< std::endl;
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << "#" << i << " a = " << a[i] << std::endl;
	}
	std::cout << "==========="<< std::endl;
	for (size_t i = 0; i < b.size(); i++)
	{
		std::cout << "#" << i << " b = " << b[i] << std::endl;
	}

	Array<int> c = b;
	c.setData(1, 21);
	std::cout << std::endl;
	std::cout << "====== Print data 3 ======"<< std::endl;
	for (size_t i = 0; i < b.size(); i++)
	{
		std::cout << "#" << i << " b = " << b[i] << std::endl;
	}
	std::cout << "==========="<< std::endl;
	for (size_t i = 0; i < c.size(); i++)
	{
		std::cout << "#" << i << " c = " << c[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "====== string ======"<< std::endl;
	Array<std::string> str1(3);
	str1.setData(0, "Hello");
	str1.setData(1, "World");
	str1.setData(2, "21school");

	std::cout << std::endl;
	std::cout << "====== Print string ======"<< std::endl;
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "#" << i << " str = " << str1[i] << std::endl;
	}

	std::cout << std::endl;
	std::cout << "====== Print  const string ======"<< std::endl;
	const Array<std::string> str2 = str1;
	std::cout << str2[0] << std::endl;

	return 0;
}
