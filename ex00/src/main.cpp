/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:17:01 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/29 16:13:59 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>

bool	inputDB(BitcoinExchange& ex, std::ifstream&	data) {
	std::string	line;

	std::getline(data, line);
	if (line != "date,exchange_rate") {
		std::cout << "The first line in the DataBase is incorrect. The correct format is \"date,exchange_rate\"." << std::endl;
		return 0;
	}
	char	date[10];
	float	value;
	char	remaining[10];
	for(; std::getline(data, line);) {
		if (std::scanf(line.c_str(), "%10[^,],%f%9s", date, &value, remaining) == 2){
			
		}
		else
			return 0;
	}
	
}

int	main(int argc, char **argv) {
	if (argc == 2) {
		BitcoinExchange	ex;
		std::ifstream	data("../resources/data.csv");
		if (!data.is_open()) {
			std::cout << "WARNING: The program can't open the database. The database need is in ./recources/data.csv." << std::endl;
			return 1;
		}
		if (!inputDB(ex, data))
			return (data.close(), 1);
	}
	else {
		std::cout << "WARNING: The number of parameters is incorrect!!!" << std::endl;
		return 1;
	}
	return 0;
}