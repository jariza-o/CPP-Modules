/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:28:40 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/18 17:37:49 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <cfloat>
#include <stdexcept>

ScalarConverter::ScalarConverter() {
	// std::cout << "ScalaConverter Void Constructor called." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& src) {
	// std::cout << "ScalaConverter Copy Constructor called." << std::endl;
	if (this != &src)
		this->_type = src._type;
}

ScalarConverter::~ScalarConverter() {
	// std::cout << "ScalaConverter Destructor called." << std::endl;
	
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& src) {
	// std::cout << "ScalaConverter Equal Operator called." << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

void	ScalarConverter::convert(std::string src) {
	std::string	vChar;
	long long	vInt = 0;
	float		vFloat = 0.0f;
	double		vDouble = 0.0;

	this->_type = this->_checkArgument(src);
	if (this->_type == 6) {
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float :" << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
	}
	else if (this->_type == 4) {
		vChar = "impossible";
		vFloat = std::sqrt(-1);
		vDouble = std::sqrt(-1);
		std::cout << "char: " << vChar << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float :" << vFloat<< "f" << std::endl;
		std::cout << "double: " << vDouble << std::endl;
		return ;
	}
	else if (this->_type == 5) {
		vChar = "impossible";
		vFloat = 1.0 / 0.0;
		vDouble = 1.0 / 0.0;
		std::cout << "char: " << vChar << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << vFloat << "f" << std::endl;
		std::cout << "double: " << vDouble << std::endl;
		return ;
	}
	else if (this->_type == 0) {
		vChar = src;
		vInt = static_cast<int>(vChar[0]);
		vFloat = static_cast<float>(vInt);
		vDouble = static_cast<double>(vInt);
		std::cout << "char: " << vChar << std::endl;
		std::cout << "int: " << vInt << std::endl;
		std::cout << "float :" << vFloat << ".0f" << std::endl;
		std::cout << "double: " << vDouble << ".0" << std::endl;
	}
	else if (this->_type == 1) {
		vChar = "Non displayable";
		vInt = atol(src.c_str());
		if (vInt > INT_MAX || vInt < INT_MIN) {
				throw std::out_of_range("The INT isn't in the correct range");
			}
		vFloat = static_cast<float>(vInt);
		vDouble = static_cast<double>(vInt);
		std::cout << "char: " << vChar << std::endl;
		std::cout << "int: " << vInt << std::endl;
		std::cout << "float: " << vFloat << ".0f" << std::endl;
		std::cout << "double: " << vDouble << ".0" << std::endl;
	}
	else if (this->_type == 2 || this->_type == 3) { // FALTA POR COMPROBAR MAX Y MIN
		vChar = "'*'";

		char* endPtr;
		vDouble = std::strtod(src.c_str(), &endPtr); // Lo de endPTR es para la comprobación de abajo, pero si la dejo no va
		// if (*endPtr != '\0') {
		// 	std::cout << "No se pudo convertir completamente el string a número" << std::endl;
		// 	return ;
		// }
		if (vFloat < -DBL_MAX || vFloat > DBL_MAX) {
			 throw std::out_of_range("The number isn't in the correct range");
		}
		vInt = static_cast<int>(vDouble);
		vFloat = static_cast<float>(vDouble);
		if (this->_type == 2) {
			if (vFloat < -FLT_MAX || vFloat > FLT_MAX) {
				throw std::out_of_range("The number isn't in the correct range");
			}
		}
		std::cout << "char: " << vChar << std::endl;
		if ((vFloat < INT_MIN || vFloat > INT_MAX) || (vDouble < INT_MIN || vDouble > INT_MAX))
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << vInt << std::endl;
		std::cout << "float: " << vFloat<< "f" << std::endl;
		std::cout << "double: " << vDouble << std::endl;
	}

}

int	ScalarConverter::_checkArgument(std::string src) {
	int	type = 0;
	int	aux = 0;

	if (src == "nan")
		return 4;
	else if (src == "inf")
		return 5;
	for (int i = 0; src[i]; i++) {
		if (src[i] >= 48 && src[i] <= 57)
			type = 1;
		else if (src[i] == '.' && type == 1){
			type = 3;
			aux = 1;
		}
		else if ((src[i] == 'f' || src[i] == 'F') && src[i + 1] == '\0' && aux == 1) // un float entero creo que tiene que ser 42.0f, si no necesita el .0 añadir que si es int tamb entre
			return 2;
		else if (src[i + 1] == '\0' && i == 0)
			return 0;
		else
			return 6;
	}
	if (type == 1 && aux == 1)
		return 3;
	return type;
}
