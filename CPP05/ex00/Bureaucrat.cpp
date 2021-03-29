/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:02:00 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 17:37:15 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &old)
{
	*this = old;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &old)
{
	_grade = old._grade;
	_name = old._name;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

const std::string &Bureaucrat::getName() const
{
	return (_name);
}

void Bureaucrat::increment()
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement()
{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw ()
{
	return ("Bureacrat grade level too hihg");
}

const char *Bureaucrat::GradeTooLowException::what() const throw ()
{
	return ("Bureacrat grade level too low");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bur)
{
	os << "Bureacrat " << bur.getName() << " with grade: " << bur.getGrade();
	return (os);
}
