/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:06:04 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/29 18:44:58 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string const &target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &old);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &old);

	virtual void execute(Bureaucrat const &bureauc) const;
};

#endif
