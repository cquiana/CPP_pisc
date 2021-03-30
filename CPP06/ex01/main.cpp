/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:51:12 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/30 12:05:50 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>


struct Data
{
	std::string s1;
	int n;
	std::string	s2;
};

void *serialize(void)
{
	char *result = new char[52];
	std::string source = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVXYZ";
	srand(time(NULL));
	std::cout << "*** serialize ***" << std::endl;
	std::cout << "s1 = ";
	for (size_t i = 0; i < sizeof(std::string); i++){
		result[i] = source[rand() % source.size()];
		std::cout << result[i];
	}
	std::cout << std::endl;
	int value = rand() % 100000;
	std::cout << "int = " << value << std::endl;
	*reinterpret_cast<int*>(result + sizeof(std::string)) = value;
	std::cout << "s2 = ";
	for (size_t i = 0; i < sizeof(std::string); i++){
		result[i + sizeof(std::string) + sizeof(int)] = source[rand() % source.size()];
		std::cout << result[i + sizeof(std::string) + sizeof(int)];
	}
	std::cout << std::endl;
	return reinterpret_cast<void*>(result);
}
Data *deserialize(void *raw)
{
	Data *data = new Data;

	data->s1 = std::string(reinterpret_cast<char *>(raw));
	data->n = *reinterpret_cast<int*>(reinterpret_cast<char *>(raw) + sizeof(std::string));
	data->s2 = std::string(reinterpret_cast<char *>(raw) + sizeof(std::string) + sizeof(int));

	return data;
}

int	main ()
{
	void *raw = serialize();
	std::cout << std::endl;
	Data *data =  deserialize(raw);
	std::cout << "*** deserialize ***" << std::endl;
	std::cout << "s1 = " << data->s1 << std::endl;
	std::cout << "int = " << data->n << std::endl;
	std::cout << "s2 = " << data->s2 << std::endl;
	delete reinterpret_cast<char *>(raw);
	delete data;
	return 0;
}
