/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:24:03 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 19:21:22 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const &old);
    ~Intern();
    Intern &operator=(Intern const &old);
    Form *makePPF(std::string target);
    Form *makeRRF(std::string target);
    Form *makeSCF(std::string target);

    Form *makeForm(std::string formType, std::string target);
    class CreateFormExeption : public std::exception
	{
	public:
		virtual const char *what() const throw ();
	};
};

#endif
