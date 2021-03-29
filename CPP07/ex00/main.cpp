/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:05:46 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/27 22:25:19 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"


int main()
{
	int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl;
	std::cout << "====== test ======" << std::endl;
	double e = 42.024;
    double f = 21.042;
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

    // std::cout << std::endl;
	// std::cout << "====== test class ======" << std::endl;
	// Awesome a1(21);
	// Awesome a2(42);

    // swap<Awesome>(a1, a2);
    // std::cout << "a1 = " << a1.getN() << ", a2 = " << a2.getN() << std::endl;
	// Awesome a3 = min<Awesome>(a1, a2);
    // std::cout << "min( a1, a2 ) = " << a3.getN() << std::endl;
    // Awesome a4 = max<Awesome>(a1, a2);
    // std::cout << "max( a1, a2 ) = " << a4.getN() << std::endl;
	return 0;
}
