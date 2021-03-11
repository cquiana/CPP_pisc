/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 07:09:43 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/11 17:50:35 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void searchContact(Contact *contact, int &i);

void addContact(Contact *contact, int &i)
{
	i = contact->getId();
	contact->createContact();
}

int	miniAtoi(const std::string str)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return res * sign;
}

void waitNum(Contact *contact, int &i)
{
	int num = i;
	std::string		input;

	std::cout << std::endl;
	std::cout << "Enter contact id number: ";
	std::getline(std::cin, input);
	if (std::cin.eof() == true)
		return;
	num = miniAtoi(input);

	if (num <= 0 || num > 8)
	{
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << "Please input digit from 1 to 8 " << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		searchContact(contact, i);
	}
	else
		contact[num - 1].displayContact();
	std::cin.clear();
}

void searchContact(Contact *contact, int &i)
{
	int id = 0;

	if (i == 0)
	{
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << "PhoneBook is empty! Please add at least one contact" << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		return;
	}
	else
	{
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << '|' << std::setfill(' ') << std::setw(10);
		std::cout << "ID" << '|';
		std::cout << std::setw(10) << "First name" << '|';
		std::cout << std::setw(10) << "Last name" << '|';
		std::cout << std::setw(10) << "Nickname" << '|' << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		while (id < i)
		{
			contact[id].displayList();
			id++;
		}
		waitNum(contact, i);
		std::cin.clear();
	}
}

void printWelcome(void)
{
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "                      WELCOME!                   " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "            THIS IS SIMPLE PHONEBOOK             " << std::endl;
	std::cout << "  YOU CAN USE COMMAND: \"ADD\", \"SEARCH\" OR \"EXIT\"" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

int		main(void)
{
	int				i = 0;
	std::string		input;
	Contact			newContact[8];

	printWelcome();
	while (1)
	{
		std::cout << "Input command: ";
		std::getline(std::cin, input);
		if (input == "EXIT" || std::cin.eof() == true)
			break;
		else if (input == "ADD")
		{
			if (i == 8)
			{
				std::cout << "-------------------------------------------------" << std::endl;
				std::cout << "PhoneBook is FULL!" << std::endl;
				std::cout << "-------------------------------------------------" << std::endl;
			}
			else
				addContact(&newContact[i], i);
		}
		else if (input == "SEARCH")
			searchContact(newContact, i);
		else
		{
			std::cout << "-------------------------------------------------" << std::endl;
			std::cout << "Please, print ADD, SEARCH or EXIT" << std::endl;
			std::cout << "-------------------------------------------------" << std::endl;
		}
		std::cout <<std::endl;
		std::cin.clear();
	}
	std::cout << "GOOD BYE!" <<std::endl;
	return 0;
}
