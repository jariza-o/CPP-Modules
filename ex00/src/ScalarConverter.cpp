/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:28:40 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/15 16:42:39 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	// std::cout << "ScalaConverter Void Constructor called." << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter& src) {
	// std::cout << "ScalaConverter Copy Constructor called." << std::endl;
	
}
ScalarConverter::~ScalarConverter() {
	// std::cout << "ScalaConverter Destructor called." << std::endl;
	
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& src) {
	// std::cout << "ScalaConverter Equal Operator called." << std::endl;
	
}

void	ScalarConverter::convert(std::string src) {
	std::cout << "char:" << std::endl;
	std::cout << "int:" << std::endl;
	std::cout << "float:" << std::endl;
	std::cout << "double:" << std::endl;
}
