/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:23:30 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/15 17:23:41 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream> // for files

// ofstream  сохранение
// ifstream  чтение

std::string	findAndReplace(std::string &str, std::string s1, std::string s2)
{
	size_t	position = 0;

	position = str.find(s1);
	if (position == std::string::npos)
	{
		std::cout << "Occurence not found" << std::endl;
	}
	else
	{
		while (position != std::string::npos)
		{
			str.replace(position, s1.size(), s2);
			position = str.find(s1, position + s2.size());
			std::cout << position << std::endl;
		}

	}
	// std::cout << str << std::endl;

	return str;
}

int		main(int ac, char **av)
{
	// if (ac != 4)
	// {
	// 	std::cout << "FAIL" << std::endl;
	// 	return 1;
	// }
	// std::ifstream	output("test");
	std::string	name = "test";
	std::string	s1 = "test";
	std::string	s2 = "qwerty";
	std::ofstream	fout; // output
	std::ifstream	fin; // for input
	std::string str;

	fin.open(name);
	if (!fin.is_open())
	{
		std::cout << "FAIL to open" << std::endl;
		return 2;
	}
	else
	{
		std::getline(fin, str);
		std::cout << str << std::endl;
	}
	std::string repName = name.append(".replace");
	std::cout << repName << std::endl;
	fout.open(name); // open file with path to file
	if (!fout.is_open())
	{
		std::cout << "FAIL" << std::endl;
		return 3;
	}
	else
	{
		std::string replased;
		replased = findAndReplace(str, s1, s2);
		fout << str << std::endl;
		std::cout << "OK" << std::endl;
	}
	fout.close();
	fin.close();

	// std::fstream fs;
	// fs.open(name, std::fstream::in | std::fstream::out | std::fstream::app);
	// if (!fs.is_open())
	// {
	// 	std::cout << "FAIL to open" << std::endl;
	// }
	// else
	// {
	// 	int value;
	// 	std::string str;
	// 	std::cout << "OK" << std::endl;
	// 	std::cout << "1 for write" << std::endl;
	// 	std::cout << "2 for read" << std::endl;
	// 	std::cin >> value;

	// 	if (value == 1)
	// 	{
	// 		std::cin >> str;
	// 		fs << str << "\n";
	// 	}
	// 	if (value == 2)
	// 	{
	// 		while(!fs.eof())
	// 		{
	// 			str = "";
	// 			// std::getline(fs, str);
	// 			fs >> str;
	// 			std::cout << str << "test" << std::endl;
	// 		}
	// 	}
	// }
	// fs.close();


	// fin.open(name);
	// if (!fin.is_open())
	// {
	// 	std::cout << "FAIL to open" << std::endl;
	// 	return 2;
	// }
	// else
	// {
	// 	std::cout << "OK" << std::endl;
	// 	std::string str;
	// 	while (!fin.eof())
	// 	{
	// 		std::getline(fin, str);
	// 		std::cout << str << std::endl;
	// 	}
	// }
	// fin.close();


	/*fout.open(name); // open file with path to file
	// fout.open(name, std::ofstream::app); // for append
	if (!fout.is_open())
	{
		std::cout << "FAIL" << std::endl;
		return 2;
	}
	else
	{
		fout << "Hello" << std::endl;
		std::cout << "OK" << std::endl;
		fout.close();
	}
	*/
	return (0);
}
