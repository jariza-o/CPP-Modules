/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:17:01 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/03 20:48:21 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <climits>
#include <stdlib.h>

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
	
	if ((line[4] && line[7] != '-') || (line[10] && line[12] != ' ') || line[11] != '|')
		return BadInput;
	
	{
	while (line[i])
		i++;
	if (i <= 13)
		return BadInput;
	i = 0;
	}
	
	while (line[i]) {
		if ((i == 4 || i == 7 || (i >= 10 && i <= 12)))
			i++;
		if (i < 10) {
			if (line[i] >= '0' && line[i] <= '9')
				i++;
			else
				return BadInput;
		}
		else if (i > 12) {
			if (((line[i] >= '0' && line[i] <= '9') || line[i] == '.')) {
				if (line[i] == '.' && decimal == true)
					return BadInput;
				else if (line[i] == '.' && decimal == false)
					decimal = true;
				i++;
			}
			else if (line[13] == '-')
				return Negative;
			else
				return BadInput;
		}
	}
	return 0;
}

bool	checkDates(std::string date) {
	int	day, month, year;
	std::string	str;

	str = date.substr(5, 2);
	month = atoi(str.c_str());
	if (month <= 0 || month >= 13)
		return false;
	str = date.substr(8);
	day = atoi(str.c_str());
	str = date.substr(0, 4);
	year = atoi(str.c_str());
	if (day <= 0)
		return false;
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
		return false;
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	else if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
		std::cout << "NO DEBERIA ENTRAR" << std::endl;
		if (day > 29)
			return false;
	}
	else if (month == 2){
		if (day > 28)
			return false;
	}
	
	return true;
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
			if (!checkDates(date))
				inputFails(BadInput, line);
			else {
				std::string	valueSTR = line.substr(13);
				double		value = std::atof(valueSTR.c_str());
				if (value > INT_MAX)
					inputFails(TooLarge, "");
				else{
					ex.programUse(date, value);
				}
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