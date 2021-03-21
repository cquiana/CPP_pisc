/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:29:12 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/21 13:39:50 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"


class Sorcerer
{
private:
	std::string		_name;
	std::string		_title;
public:
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
