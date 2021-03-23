/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:07:39 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/23 22:35:14 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Presidential Pardon", 25, 5, target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &old) :
	Form(old.getName(), old.getGradeToSign(), old.getGradeToExec(), old.getTarget())
{
	*this = old;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &old)
{
	(void)old;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &bureauc) const
{
	if (!getIsSign())
		throw Form::isSignedException();
	if (bureauc.getGrade() > getGradeToExec())
		throw Form::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
