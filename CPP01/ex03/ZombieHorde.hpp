/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:37:21 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/16 12:47:34 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int		_N;
	Zombie*	_zombie;
public:
	ZombieHorde(int n);
	~ZombieHorde(void);

	void announce(void);
};

#endif
