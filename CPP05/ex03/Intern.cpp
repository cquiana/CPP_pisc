/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:22:28 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/26 10:24:26 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &old)
{
    *this = old;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &old)
{
    (void)old;
    return (*this);
}

Form *Intern::makePPF(std::string target)
{
	std::cout << "Intern creates PresidentialPardonForm for " << target << std::endl;
	return new PresidentialPardonForm(target);
}
Form *Intern::makeRRF(std::string target)
{
	std::cout << "Intern creates RobotomyRequestForm for " << target << std::endl;
	return new RobotomyRequestForm(target);
}
Form *Intern::makeSCF(std::string target)
{
	std::cout << "Intern creates ShrubberyCreationForm for " << target << std::endl;
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string formType, std::string target)
{

    std::string const  type[3] = {"Presidential Pardon",
                            "Robotomy Request",
                            "Shrubbery Creation"};

    Form *(Intern::*create[3])(std::string) = {
                            &Intern::makePPF,
                            &Intern::makeRRF,
                            &Intern::makeSCF
                        };
    for (int i = 0; i < 3;  i++)
    {
        if (formType == type[i])
        	return (this->*create[i])(target);
	}
	throw CreateFormExeption();
	return (NULL);
}

const char *Intern::CreateFormExeption::what() const throw ()
{
	return ("Unknow form type!");
}
