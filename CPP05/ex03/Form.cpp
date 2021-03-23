/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:03:44 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/23 22:32:46 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int gradeToSign, int gradeToExec, std::string target) :
 _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _isSign(false),  _target(target)
{
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw Form::GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(const Form &old) :
 _name(old._name), _gradeToSign(old._gradeToSign), _gradeToExec(old._gradeToExec),  _target(old._target)
{
	_isSign = false;
}

Form &Form::operator=(const Form &old)
{
	_isSign = old._isSign;
	return (*this);
}

std::string Form::getName() const
{
	return (_name);
}
int	Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int	Form::getGradeToExec() const
{
	return (_gradeToExec);
}

bool Form::getIsSign() const
{
	return (_isSign);
}

std::string Form::getTarget() const
{
	return (_target);
}

void Form::beSigned(const Bureaucrat &bureac)
{
	if (bureac.getGrade() <= _gradeToSign)
		_isSign = true;
	else
		throw GradeTooLowException();

}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "Form: " << form.getName()
	<< " +" << form.getTarget() << "+"
	<< " has grade to sign: " << form.getGradeToSign()
	<< " grade to execute: " << form.getGradeToExec();
	if (form.getIsSign() == false)
		os << " form is unsigned" << std::endl;
	else
		os << " form is signed" << std::endl;
	return (os);
}

const char *Form::GradeTooHighException::what() const throw ()
{
	return ("Grade level too high");
}

const char *Form::GradeTooLowException::what() const throw ()
{
	return ("Grade level too low");
}

const char *Form::isSignedException::what() const throw ()
{
	return ("Form is unsigned!");
}
