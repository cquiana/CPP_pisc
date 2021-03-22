/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:17:18 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 18:13:50 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int		main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "============test===========" << std::endl;
	tmp = src->createMateria("ice");
	AMateria *unq = tmp;
	me->equip(tmp);
	me->use(2, *bob);
	me->use(-3, *bob);
	me->use(3, *bob);
	me->unequip(2);
	me->unequip(3);
	delete unq;
	delete bob;
	delete me;
	delete src;
	std::cout << "============test===========" << std::endl;
	return 0;
}
