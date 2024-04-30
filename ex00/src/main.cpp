/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:17:01 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/30 17:06:13 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

bool	inputDB(BitcoinExchange& ex) {
	std::ifstream	data("./resources/data.csv");
	if (!data.is_open()) {
		std::cout << "WARNING: The program can't open the database. The database need is in ./recources/data.csv." << std::endl;
		return false;
	}
	std::string	line;
	std::getline(data, line);
	if (line != "date,exchange_rate") {
		std::cout << "The first line in the DataBase is incorrect. The correct format is \"date,exchange_rate\"." << std::endl;
		return (data.close(), false);
	}
	char	date[10];
	float	value;
	char	remaining[10];
	while (std::getline(data, line)) {
		if (std::sscanf(line.c_str(), "%10[^,],%f%9s", date, &value, remaining) == 2){
			std::pair<std::string, int>	miPar(static_cast<std::string>(date), value); // Esto se usa para poder insertar cosas en el mapa por Pares
			ex.insertMap(miPar);
			write(1, "aaaaaaa\n", 8);
		}
		else
			std::cout << "Failed to parse the line: " << line << std::endl;
		write(1, "hjbhjbh\n", 8);

	}
	data.close();
	std::cout << "guay1" << std::endl;
	return true;
}

int	main(int argc, char **argv) {
	
	(void)argv;
	
	if (argc == 2) {
		BitcoinExchange	ex;
		// std::ifstream	data("./resources/data.csv");
		// if (!data.is_open()) {
		// 	std::cout << "WARNING: The program can't open the database. The database need is in ./recources/data.csv." << std::endl;
		// 	return 1;
		// }
		inputDB(ex);
		std::cout << "guay" << std::endl;

		// if (inputDB(ex, data) == false) // NOSE PORQUE DA SEGMENTATION
		// 	return (data.close(), 1);
		std::map<std::string, float> map2 (ex.getMap());
		
		
		std::map<std::string, float>::const_iterator iter = map2.begin();
		std::cout << iter->first << ": " << iter->second << std::endl;

		
		for (std::map<std::string, float>::const_iterator iter = map2.begin(); iter != map2.end(); ++iter) {
					std::cout << iter->first << ": " << iter->second << std::endl;
						std::cout << "TEST" << std::endl;
    		}
	}
	else {
		std::cout << "WARNING: The number of parameters is incorrect!!!" << std::endl;
		return 1;
	}
	return 0;
}