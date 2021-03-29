/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:45:14 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 13:06:41 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Hobbit.hpp"

int main ()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Hobbit sam("Sam");
	std::cout << robert << jim << joe << sam;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(sam);

	return 0;
}
