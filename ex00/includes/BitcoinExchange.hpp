/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:19:43 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/02 13:15:03 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <iostream>
#include <map>

class BitcoinExchange {
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& src);
	~BitcoinExchange();

	BitcoinExchange&	operator=(const BitcoinExchange& src);

	void							insertMap(std::pair<std::string, int> miPar);
	std::map<std::string, double>&	getMap();
	void							printValues();

private:
	std::map<std::string, double>	_container;
};

#endif
