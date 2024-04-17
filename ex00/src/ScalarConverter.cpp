/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:28:40 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/17 08:28:09 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <cmath>
#include <stdio.h>
#include <cstdlib>
#include <cfloat>

ScalarConverter::ScalarConverter() {
	// std::cout << "ScalaConverter Void Constructor called." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& src) {
	// std::cout << "ScalaConverter Copy Constructor called." << std::endl;
	(void)src;
}

ScalarConverter::~ScalarConverter() {
	// std::cout << "ScalaConverter Destructor called." << std::endl;
	
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& src) {
	// std::cout << "ScalaConverter Equal Operator called." << std::endl;
	(void)src;
	return *this;
}

void	ScalarConverter::convert(std::string src) {
	std::string	vChar;
	int			vInt = 0;
	float		vFloat = 0.0f;
	double		vDouble = 0.0;

	this->_type = this->checkArgument(src);
	std::cout << "TYPE: " << this->_type << std::endl;
	if (this->_type == 4) {
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
		std::cout << "float: " << vFloat<< "f" << std::endl;
		std::cout << "double: " << vDouble << std::endl;
		return ;
	}
	else if (this->_type == 0) {
		vChar = "impossible";
		vInt = 2;
		vFloat = std::sqrt(-1);
		vDouble = std::sqrt(-1);
	}
	else if (this->_type == 1) { // FALTA POR COMPROBAR MAX Y MIN
		vChar = "Non displayable";
		vInt = atoi(src.c_str());
		vFloat = static_cast<float>(vInt);
		vDouble = static_cast<double>(vInt);
		std::cout << "char: " << vChar << std::endl;
		std::cout << "int: " << vInt << std::endl;
		std::cout << "float: " << vFloat<< ".0f" << std::endl;
		std::cout << "double: " << vDouble << std::endl;
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
			 throw std::out_of_range("The namber isnt in the correct range");
		}
		vInt = static_cast<int>(vDouble);
		vFloat = static_cast<float>(vDouble);
		if (this->_type == 2) {
			if (vFloat < -FLT_MAX || vFloat > FLT_MAX) {
				throw std::out_of_range("The namber isnt in the correct range");
			}
		}
		std::cout << "char: " << vChar << std::endl;
		std::cout << "int: " << vInt << std::endl;
		std::cout << "float: " << vFloat<< "f" << std::endl;
		std::cout << "double: " << vDouble << std::endl;
	}

}

int	ScalarConverter::checkArgument(std::string src) {
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
		else if (src[i] == 'f' && src[i + 1] == '\0' && aux == 1) // un float entero creo que tiene que ser 42.0f, si no necesita el .0 añadir que si es int tamb entre
			return 2;
		else 
			return 0;
	}
	if (type == 1 && aux == 1)
		return 3;
	return type;
}
