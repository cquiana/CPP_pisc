/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:32:17 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/22 15:40:25 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public virtual IMateriaSource
{
private:
	int			_count;
	AMateria	*_materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &old);
	MateriaSource &operator=(MateriaSource const &old);
	virtual ~MateriaSource();
	void learnMateria(AMateria* someMateria);
	AMateria* createMateria(std::string const & type);
};



#endif
