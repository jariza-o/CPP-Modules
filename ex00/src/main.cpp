/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:17:01 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/03 13:19:53 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <climits>

enum {
	Negative = 1,
	BadInput,
	TooLarge
};

void	inputFails(int fail, std::string line) {
	switch (fail) {
	case Negative:
		std::cout << "Error: not a positive number." << std::endl;
		break;
	case BadInput:
		std::cout << "Error: bad input => " << line << std::endl;
		break;
	case TooLarge:
		std::cout << "Error: too large a number." << std::endl;
		break;
	default :
		std::cout << "Error: Default Error." << std::endl;
	}
}

int	checkInput(std::string line) {
	bool	decimal = false;
	int		i = 0;
	
	if ((line[4] && line[7] != '-') || (line[10] && line[12] != ' ') || line[11] != '|') {
		std::cout << "ewe" << std::endl;
		return BadInput;
	}
	while (line[i])
		i++;
	if (i <= 13)
		return BadInput;
	i = 0;
	while (line[i]) {
		if ((i == 4 || i == 7 || (i >= 10 && i <= 12)))
			i++;
		if (i < 10) {
			if (line[i] >= '0' && line[i] <= '9')
				i++;
			else {
				std::cout << i << "           ddddd" << std::endl;
				return BadInput;
			}
		}
		else if (i > 12) {
			if (((line[i] >= '0' && line[i] <= '9') || line[i] == '.')) {
				if (line[i] == '.' && decimal == true)
				{
					std::cout << i << "fffff" << std::endl;
					return BadInput;
				}
				else if (line[i] == '.' && decimal == false)
					decimal = true;
				i++;
			}
			else if (line[13] == '-')
				return Negative;
			else {
				std::cout << i << "    wwwww" << std::endl;
				return BadInput;
			}
		}
	}
	return 0;
}

bool	inputData(char	*path, BitcoinExchange&	ex) { (void)ex;
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
		int failId = checkInput(line);
		if (failId == 0)
		{
			std::string	date = line.substr(0,10);
			std::string	valueSTR = line.substr(13);
			double		value = std::atof(valueSTR.c_str());
			if (value > INT_MAX)
				inputFails(TooLarge, "");
			else{
				ex.programUse(date, value);
			}
		}
		else
			inputFails(failId, line);
	}
	data.close();
	return true;
}

int	main(int argc, char **argv) {
	
	if (argc == 2) {
		BitcoinExchange	ex;
		ex.insertMap();
		// int		year, moth, day;
		// double	value;
		inputData(argv[1], ex);
		// if (inputData(argv[0]))
		// 	startFind();
	
		// ex.printValues();
	}
	else {
		std::cout << "WARNING: The number of parameters is incorrect!!!" << std::endl;
		return 1;
	}
	return 0;
}