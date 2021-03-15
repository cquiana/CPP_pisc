/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:43:54 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/12 19:08:43 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;
	std::string _type;
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();

	void setInfo();
	void announce();
};

#endif
