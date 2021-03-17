/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 22:11:28 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/16 14:57:06 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>      // std::stringstream

class Brain
{
private:
	float 	_weigth;
	float	_size;
	std::string _addr;
public:
	Brain(void);
	~Brain(void);

	std::string identify();
};

#endif
