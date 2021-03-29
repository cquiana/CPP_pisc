/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 13:13:42 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 14:43:59 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"

class Victim
{
protected:
	std::string		_name;
	Victim();
public:
	Victim(std::string name);
	Victim(Victim &old);
	virtual ~Victim();
	Victim &operator=(Victim const &old);
	std::string const getName() const;
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, Victim const &victim);

#endif
