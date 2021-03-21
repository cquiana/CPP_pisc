/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hobbit.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:29:58 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/21 14:33:15 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOBBIT_HPP
#define HOBBIT_HPP
#include "Victim.hpp"

class Hobbit : public Victim
{
public:
	Hobbit(std::string name);
	Hobbit(Hobbit const &old);
	~Hobbit();
	Hobbit &operator=(Hobbit const &old);
	std::string	const getName() const;
	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, Hobbit const &hobbit);


#endif
