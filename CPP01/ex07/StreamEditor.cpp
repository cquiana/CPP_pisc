/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamEditor.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:37:56 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/15 19:51:46 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamEditor.hpp"

SreamEditor::SreamEditor(void)
{
	return;
}

SreamEditor::~SreamEditor(void)
{
}

void	SreamEditor::setParam(char *p1,  char *p2, char *p3)
{
	this->_name = p1;
	this->_s1 = p2;
	this->_s2 = p3;
	this->_repName = p1;
	this->_repName = this->_repName.append(".replace");
}

bool	SreamEditor::validate(void)
{
	if (this->_s1 == "")
		return false;
	return true;
}

void	SreamEditor::printParam(void)
{
	std::cout << this->_name << std::endl;
	std::cout << this->_s1 << std::endl;
	std::cout << this->_s2<< std::endl;
	std::cout << this->_repName << std::endl;
}

bool	SreamEditor::openInputFile(void)
{
	this->_fin.open(this->_name);
	if (!this->_fin.is_open())
	{
		return false;
	}
	else
		return true;
}

bool	SreamEditor::openOutnputFile(void)
{
	this->_fout.open(this->_repName);
	if (!this->_fout.is_open())
	{
		return false;
	}
	else
		return true;
}

std::string	SreamEditor::getStr(void)
{
	std::getline(this->_fin, this->_input);
	return this->_input;
}

void	SreamEditor::findAndReplace(std::string &str)
{
	size_t	position = 0;

	position = str.find(this->_s1);
	if (position == std::string::npos)
	{
		std::cout << "Error: Occurence not found!" << std::endl;
	}
	else
	{
		while (position != std::string::npos)
		{
			str.replace(position, this->_s1.size(), this->_s2);
			position = str.find(this->_s1, position + this->_s2.size());
		}
	}
}

void	SreamEditor::writeToRep(std::string const str)
{
	this->_fout << str;
}

void	SreamEditor::closeFile()
{
	this->_fin.close();
	this->_fout.close();
}
