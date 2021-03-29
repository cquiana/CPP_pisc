/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:09:55 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/27 21:03:41 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <string>
#include <cstdlib>
#include <time.h>
#include <iostream>

Base *generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return (new A);
	if (i == 1)
		return (new B);
	return (new C);
}

void identify_from_pointer(Base *p)
{
	if (A *a = dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (B *b = dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (C *c = dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknow type" << std::endl;
}

void identify_from_reference(Base &p)
{
	if (A *a  = dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (B *b = dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (C *c = dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknow type" << std::endl;
}

int	main()
{
	srand(time(NULL));
	std::cout << "====== test #1======" << std::endl;
	Base *ptr = generate();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	std::cout << std::endl;
	std::cout << "====== test #2======" << std::endl;
	Base *ptr2 = generate();
	identify_from_pointer(ptr2);
	identify_from_reference(*ptr2);
	std::cout << std::endl;
	std::cout << "====== test #3======" << std::endl;
	Base *ptr3 = generate();
	identify_from_pointer(ptr3);
	identify_from_reference(*ptr3);

	delete ptr;
	delete ptr2;
	delete ptr3;

	return 0;
}
