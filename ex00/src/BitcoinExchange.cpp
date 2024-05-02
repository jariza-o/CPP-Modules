/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:28:58 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/02 16:28:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cstdlib>

BitcoinExchange::BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) {
	(void)src;
}

BitcoinExchange::~BitcoinExchange() {
	
}
#include <unistd.h>
BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& src) {
	if (this != &src)
		*this = src;
	return *this;
}

void	BitcoinExchange::insertMap() {
	
	std::ifstream	data("./resources/data.csv");
	if (!data.is_open()) {
		std::cout << "WARNING: The program can't open the database. The database need is in ./recources/data.csv." << std::endl;
		return ;
	}
	std::string	line;
	std::getline(data, line);
	if (line != "date,exchange_rate") {
		std::cout << "The first line in the DataBase is incorrect. The correct format is \"date,exchange_rate\"." << std::endl;
		data.close();
		return ;
	}
	while (std::getline(data, line)) {
		std::string	date = line.substr(0,10);
		std::string	valueSTR = line.substr(11);
		double		value = std::atof(valueSTR.c_str());
		std::pair<std::string, double>	miPar(date, value); // Esto se usa para poder insertar cosas en el mapa por Pares
		this->_container.insert(miPar);
	}
	data.close();
	this->printValues();
}

std::map<std::string, double>&	BitcoinExchange::getMap() {
	return this->_container;
}

void	BitcoinExchange::printValues() {
	for (std::map<std::string, double>::const_iterator iter = this->_container.begin(); iter != this->_container.end(); ++iter) {
		std::cout << iter->first << ": " << iter->second << std::endl;
	}
}