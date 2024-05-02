/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:17:01 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/02 16:34:02 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cstdlib>

// bool	checkInput(std::string line) {
// 	bool	decimal;
// 	int		i = 0;
	
// 	while (line[i]) {
// 		if ((i == 4 || i == 7) && line[i] == '-') //checker -
// 			i++;
// 		else if ((i == 4 || i == 7) && line[i] != '-') //checker -
// 			return false;

// 		if (i == 10 && line[i] == ',') // checker ,
// 			i++;
// 		else if (i == 10 && line[i] != ',')
// 			return false;

// 		if (line[i] >= '0' && line[i] <= '9') { // Son numeros y mes de 1 al 12 y dia correcto
// 			if (i == 5 && (line[i] > '0' || line[i] > '1'))
// 				return false;
// 			else if (i == 5 && line[i] == '1') {
// 				if (line[i + 1] < '0' || line[i + 1] > '2')
// 					return false;
// 			}
// 			else if (i == 8 || i == 9) {
// 				if (i == 8 && (line[i] < '0' || line[i] > '3'))
// 					return false;
// 				else if ((i == 8 && line[i] == '3') && line[i + 1] > 1)
// 					return false;
// 			}

// 			if (line[5] == '0' && line[6] == '2' && (line[8] > '0' && line[8] > '2'))
// 				return false;
// 			// Meter lo de si es 28 o 29 de feberero, aunque para .csv no es necesario
// 			i++;
// 		}
// 		else if (line [i] == '.' && i > 11 & decimal == false && line[i + 1] != '\0') {
// 			decimal = true;
// 			i++;
// 		}
// 		else
// 			return false;
// 	}
// 	return true;
// }

// bool	inputDB(BitcoinExchange& ex) {
// 	std::ifstream	data("./resources/data.csv");
// 	if (!data.is_open()) {
// 		std::cout << "WARNING: The program can't open the database. The database need is in ./recources/data.csv." << std::endl;
// 		return false;
// 	}
// 	std::string	line;
// 	std::getline(data, line);
// 	if (line != "date,exchange_rate") {
// 		std::cout << "The first line in the DataBase is incorrect. The correct format is \"date,exchange_rate\"." << std::endl;
// 		return (data.close(), false);
// 	}
// 	while (std::getline(data, line)) {
// 		if (checkInput(line) == true)
// 		{
// 			std::string	date = line.substr(0,10);
// 			std::string	valueSTR = line.substr(11);
// 			double		value = std::atof(valueSTR.c_str());
// 			std::pair<std::string, double>	miPar(date, value); // Esto se usa para poder insertar cosas en el mapa por Pares
// 			ex.insertMap(miPar);
// 		}
// 		else // A Lo mejor eliminar si no tengo en cuenta en el .csv el 28 o 29 segun el año
// 			std::cout << "Failed to parse the line: " << line << std::endl;
// 	}
// 	data.close();
// 	return true;
// }

bool	checkInput(std::string line) {
	bool	decimal;
	int		i = 0;
	
	if ((line[4] && line[7] != '-') || (line[10] && line[12] != ' ') || line[11] != '|')
		return false;
	while (line[i]) {
		if ((i == 4 || i == 7 || (i >= 10 && i <= 12)))
			i++;
		if (i < 12) {
			if (line[i] >= '0' && line[i] <= '9')
				i++;
			else
				return false;
		}
		else if (i > 12) {
			if (((line[i] >= '0' && line[i] <= '9') || line[i] == '.')) {
				if (line[i] == '.' && decimal == true)
					return false;
				else
					decimal = true;
				i++;
			}
			else
				return false;
		}
	}
	return true;
}

bool	inputData(char	*path) {
	std::ifstream	data(path);
	if (!data.is_open()) {
		std::cout << "WARNING: The program can't open the input file." << std::endl;
		return false;
	}
	std::string	line;
	std::getline(data, line);
	if (line != "date | value") {
		std::cout << "The first line in the input files is incorrect. The correct format is \"date | value\"." << std::endl;
		return (data.close(), false);
	}
	while (std::getline(data, line)) {
		if (checkInput(line) == true)
		{
			std::string	date = line.substr(0,10);
			std::string	valueSTR = line.substr(11);
			double		value = std::atof(valueSTR.c_str());
			std::pair<std::string, double>	miPar(date, value); // Esto se usa para poder insertar cosas en el mapa por Pares
		}
		else // A Lo mejor eliminar si no tengo en cuenta en el .csv el 28 o 29 segun el año
			std::cout << "Failed to parse the line: " << line << std::endl;
	}
	data.close();
	return true;
}

int	main(int argc, char **argv) {
	
	(void)argv;
	
	if (argc == 2) {
		BitcoinExchange	ex;
		ex.insertMap();
		int		year, moth, day;
		double	value;
		inputData(argv[0]);
		// 	return 1;
	
		// ex.printValues();
	}
	else {
		std::cout << "WARNING: The number of parameters is incorrect!!!" << std::endl;
		return 1;
	}
	return 0;
}