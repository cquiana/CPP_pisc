/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:00:47 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/23 22:23:56 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string	_name;
	int		_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &old);
	Bureaucrat &operator=(Bureaucrat const &old);
	~Bureaucrat();
	int getGrade() const;
	const std::string &getName() const;
	void increment();
	void decrement();
	void signForm(Form &form) const;

class GradeTooHighException : public std::exception
{
public:
	virtual const char *what() const throw ();
};

class GradeTooLowException : public std::exception
{
public:
	virtual const char *what() const throw ();
};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bur);

#endif
