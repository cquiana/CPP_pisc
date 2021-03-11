/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 19:16:34 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/11 17:32:05 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	Contact::count += 1;
	this->_id = count;
	return;
}

Contact::~Contact()
{
	Contact::count -= 1;
	return;
}
void Contact::createContact(void)
{
	std::cout << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "Enter contact #" << this->_id << " information:"<< std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "First name: ";
	getline(std::cin, this->_firstName);
	std::cout << "Last name: ";
	getline(std::cin, this->_lastName);
	std::cout << "Nickname: ";
	getline(std::cin, this->_nickname);
	std::cout << "Login: ";
	getline(std::cin, this->_login);
	std::cout << "Postal Address: ";
	getline(std::cin, this->_postalAddress);
	std::cout << "E-mail: ";
	getline(std::cin, this->_emailAddress);
	std::cout << "Phone number: ";
	getline(std::cin, this->_phoheNumber);
	std::cout << "Birthday date: ";
	getline(std::cin, this->_birthdayDate);
	std::cout << "Favorite meal: ";
	getline(std::cin, this->_favoriteMeal);
	std::cout << "Underwear color: ";
	getline(std::cin, this->_underwearColor);
	std::cout << "Darkest secret: ";
	getline(std::cin, this->_darkestSecret);
}

void Contact::displayContact(void)
{
	std::cout << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "Contact #" << this->_id << " information:"<< std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "First name:      " << this->_firstName << std::endl;
	std::cout << "Last name:       " << this->_lastName << std::endl;
	std::cout << "Nickname:        " << this->_nickname << std::endl;
	std::cout << "Login:           " << this->_login << std::endl;
	std::cout << "Postal Address:  " << this->_postalAddress << std::endl;
	std::cout << "E-mail:          " << this->_emailAddress << std::endl;
	std::cout << "Phone number:    " << this->_phoheNumber << std::endl;
	std::cout << "Birthday date:   " << this->_birthdayDate << std::endl;
	std::cout << "Favorite meal:   " << this->_favoriteMeal << std::endl;
	std::cout << "Underwear color: " << this->_underwearColor << std::endl;
	std::cout << "Darkest secret:  " << this->_darkestSecret << std::endl;
}

void Contact::displayList(void)
{
	std::cout << '|' << std::setfill(' ') << std::setw(10);
	std::cout << this->_id << '|';
	cutField(this->_firstName);
	cutField(this->_lastName);
	cutField(this->_nickname);
	std::cout << std::endl;
}

void Contact::cutField(std::string field)
{
	if (field.size() <= 10)
		std::cout << std::setw(10) << field;
	else
		std::cout << field.substr(0, 9) << '.';
	std::cout << '|';
}

int		Contact::getId(void)
{
	return this->_id;
}

int Contact::count = 0;
