/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:29:12 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 19:01:02 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string		_name;
	std::string		_title;
public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &old);
	~Sorcerer();
	Sorcerer &operator=(Sorcerer const &old);
	std::string	const getName() const;
	std::string	const getTitle() const;
	void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &sorcerer);

#endif
