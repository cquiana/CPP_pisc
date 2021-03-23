/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:21:06 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/23 20:31:14 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm();
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
