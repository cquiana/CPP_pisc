/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <cquiana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:24:03 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/25 16:27:11 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:

public:
    Intern();
    ~Intern();

    Form *makeForm(std::string formType, std::string target);
    class CreateFormExeption : public std::exception
	{
	public:
		virtual const char *what() const throw ();
	};
};

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string formType, std::string target)
{
    Form *newForm =  NULL;
    std::string const  type[3] = {
       "Presidential Pardon",
       "Robotomy Request",
       "Shrubbery Creation"
   };


    for (int i = 0; i < 3;  i++)
    {
        if (formType.compare(type[i]))
                throw CreateFormExeption();
            newForm = new RobotomyRequestForm(target);
            std::cout << "Intern creates " << formType << std::endl;
            return (newForm);
    }
    return (newForm);
}

const char *Intern::CreateFormExeption::what() const throw ()
{
	return ("Unknow form type!");
}

#endif