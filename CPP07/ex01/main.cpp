/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:28:50 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 10:31:40 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template< typename T >
void print(T &x)
{
    std::cout << x << std::endl;
	return;
}

template< typename T >
void increment(T &x)
{
	x += 5;
	std::cout << x << std::endl;
}

template< typename T >
void uppercase(T &x)
{
	x -= 32;
}

int	main()
{
	int tab[] = { 0, 1, 2, 3, 4};
	std::cout << "====== test print =======" << std::endl;
	iter(tab, 5, print);
	std::cout << std::endl;
	std::cout << "====== test inc =======" << std::endl;
	iter(tab, 5, increment);
	std::cout << std::endl;
	std::cout << "====== test uppercase =======" << std::endl;
	char str[]  = "hello";
	iter(str, 5, uppercase);
	std::cout << str << std::endl;

	return 0;
}


// class Awesome
// {
// public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
// private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >

// void print( T const & x ) {
//     std::cout << x << std::endl; return;
// }

// int main() {

//     int tab[] = { 0, 1, 2, 3, 4 };
//     Awesome tab2[5];
//     iter( tab, 5, print<int> );
//     iter( tab2, 5, print<Awesome> );
//     return 0;
// }
