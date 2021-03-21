/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 13:47:26 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/21 14:23:28 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(Peon const &old);
	~Peon();
	Peon &operator=(Peon const &old);
	std::string	const getName() const;
	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, Peon const &poen);

#endif
