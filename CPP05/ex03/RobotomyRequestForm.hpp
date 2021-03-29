/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:21:06 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 18:34:56 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const &target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &old);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &old);

	virtual void execute(Bureaucrat const &bureauc) const;
	class RobotomyRandomExeption : public std::exception
	{
	public:
		virtual const char *what() const throw ();
	};
};

#endif
