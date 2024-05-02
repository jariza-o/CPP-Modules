/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:28:58 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/02 15:38:15 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

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

void	BitcoinExchange::insertMap(std::pair<std::string, int> miPar) {
	this->_container.insert(miPar);
	// this->printValues();
}

std::map<std::string, double>&	BitcoinExchange::getMap() {
	return this->_container;
}

void	BitcoinExchange::printValues() {
	for (std::map<std::string, double>::const_iterator iter = this->_container.begin(); iter != this->_container.end(); ++iter) {
		std::cout << iter->first << ": " << iter->second << std::endl;
	}
}