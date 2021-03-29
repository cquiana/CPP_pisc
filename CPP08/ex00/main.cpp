/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:02:13 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 19:43:12 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include "easyfind.hpp"

int		main()
{
	std::cout << "======== list ========" << std::endl;
	std::list<int>	lst;
	lst.push_front(32);
	lst.push_front(0);
	lst.push_back(21);
	lst.push_back(5);
	lst.push_back(21);

	try
	{
		std::cout << *easyfind(lst, 32) << std::endl;
		std::cout << *easyfind(lst, 2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "======== vector ========" << std::endl;
	std::vector<int> vect;
	vect.push_back(0);
	vect.push_back(11);
	vect.push_back(43);
	vect.push_back(22);
	vect.push_back(5);

	try
	{
		std::cout << *easyfind(vect, 22) << std::endl;
		std::cout << *easyfind(vect, 21) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "======== set ========" << std::endl;
	std::set<int> st;
	try
	{
		std::cout << *easyfind(st, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
