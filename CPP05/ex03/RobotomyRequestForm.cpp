/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:24:44 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 18:37:31 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 72, 45, "no target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request", 72, 45, target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &old) :
	Form(old.getName(), old.getGradeToSign(), old.getGradeToExec(), old.getTarget())
{
	*this = old;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &old)
{
	(void)old;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &bureauc) const
{
	if (!getIsSign())
		throw Form::isSignedException();
	if (bureauc.getGrade() > getGradeToExec())
		throw Form::GradeTooLowException();
	std::cout << "### Make some noise ###" << std::endl;
	int i = rand() % 2;
	if (i == 0)
		throw RobotomyRequestForm::RobotomyRandomExeption();
	std::cout << _target << " has been robotomized successfully" << std::endl;
}

const char *RobotomyRequestForm::RobotomyRandomExeption::what() const throw ()
{
	return ("Robotomized failure");
}
