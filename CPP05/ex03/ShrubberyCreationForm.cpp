/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:04:42 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 18:37:38 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137, "no target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery Creation", 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &old) :
	Form(old.getName(), old.getGradeToSign(), old.getGradeToExec(), old.getTarget())
{
	*this = old;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &old)
{
	(void)old;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &bureauc) const
{
	if (!getIsSign())
		throw Form::isSignedException();
	if (bureauc.getGrade() > getGradeToExec())
		throw Form::GradeTooLowException();
	std::string fName = Form::getTarget().append("_shrubbery");
	std::ofstream fOut;
	fOut.open(fName);
	if (!fOut.is_open())
		throw ShrubberyCreationForm::ShrubberyFormExeption();
	fOut << "                       " << std::endl;
	fOut << "           +           " << std::endl;
	fOut << "          *4*          " << std::endl;
	fOut << "         **2**         " << std::endl;
	fOut << "        ~~~~~~~        " << std::endl;
	fOut << "       *********       " << std::endl;
	fOut << "      ~~~~~~~~~~~      " << std::endl;
	fOut << "     *************     " << std::endl;
	fOut << "    ###############    " << std::endl;
	fOut << "          |||          " << std::endl;
	fOut.close();
}

const char *ShrubberyCreationForm::ShrubberyFormExeption::what() const throw ()
{
	return ("File creation fail!");
}
