/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:06:04 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/16 11:34:35 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	Brain _brain;
public:
	Human();
	~Human();

	Brain &getBrain(void);
	std::string identify(void);
};


#endif
