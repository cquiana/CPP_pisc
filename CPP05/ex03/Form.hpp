/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:03:33 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 18:42:34 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const int _gradeToSign;
	const int _gradeToExec;
	bool _isSign;
	Form();
protected:
	const std::string _target;
public:
	Form(std::string const &name, int gradeToSign, int gradeToExec, std::string target);
	Form(const Form &old);
	virtual ~Form();
	Form &operator=(const Form &old);

	std::string getName() const;
	int	getGradeToSign() const;
	int	getGradeToExec() const;
	bool getIsSign() const;
	std::string getTarget() const;
	void beSigned(const Bureaucrat &bureac);
	virtual void execute(Bureaucrat const &bureac) const = 0;

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
	class isSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw ();
	};
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif
