/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 19:15:34 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/11 15:47:51 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _login;
	std::string _postalAddress;
	std::string _emailAddress;
	std::string _phoheNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underwearColor;
	std::string _darkestSecret;
	int			_id;

public:
	Contact();
	~Contact();

	static int count;
	int	getId();
	void createContact();
	void displayContact();
	void displayList();
	void cutField(std::string field);
};

#endif
