/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:48:18 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/16 12:46:30 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;
public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
};


#endif
