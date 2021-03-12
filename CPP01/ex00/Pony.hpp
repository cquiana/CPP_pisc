/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 06:58:44 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/12 09:53:36 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
private:
	int _age;
	std::string _name;
	std::string _color;
public:
	Pony(int age, std::string name, std::string color);
	~Pony();

	void getInfo();
};

#endif
