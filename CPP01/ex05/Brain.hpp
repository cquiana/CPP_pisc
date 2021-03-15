/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 22:11:28 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/13 00:06:10 by cquiana          ###   ########.fr       */
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
	Brain();
	~Brain();

	std::string identify();
};

#endif
