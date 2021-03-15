/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamEditor.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:36:53 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/15 19:50:21 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMEDITOR_HPP
#define STREAMEDITOR_HPP

#include <iostream>
#include <string>
#include <fstream> // for files

// ofstream  write
// ifstream  read

class SreamEditor
{
private:
	std::string		_name;
	std::string		_s1;
	std::string		_s2;
	std::string		_input;
	std::string		_repName;
	std::ofstream	_fout;
	std::ifstream	_fin;

public:
	SreamEditor(void);
	~SreamEditor(void);
	void	setParam(char *p1,  char *p2, char *p3);
	bool	validate(void);
	void	printParam(void);
	bool	openInputFile(void);
	bool	openOutnputFile(void);
	void	findAndReplace(std::string &str);
	void	writeToRep(std::string const str);
	void	closeFile(void);

	std::string getStr(void);
};

#endif
