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
	if (this->_type == 4) {
		vChar = "impossible";
		vInt = "impossible"; // Como paso el str impossible a INT???? debe de ser con reinterpretet??
		vFloat = std::sqrt(-1); // COMO HAGO PARA QUE IMPRIMA LA f????
		vDouble = std::sqrt(-1);
	}
	else if (this->_type == 5) {
		vChar = "impossible";
		vInt = "impossible"; // Como paso el str impossible a INT????
		vFloat = 1.0 / 0.0; // COMO HAGO PARA QUE IMPRIMA LA f????
		vDouble = 1.0 / 0.0;	
	}
	std::cout << "char:" << vChar << std::endl;
	std::cout << "int:" << vInt << std::endl;
	std::cout << "float:" << vFloat<< std::endl;
	std::cout << "double:" << vDouble << std::endl;
}

int	ScalarConverter::checkArgument(std::string src) {
	int	type = 0;

	if (src == "nan")
		return 4;
	else if (src == "inf")
		return 5;
	for (int i = 0; src[i]; i++) {
		if (src[i] >= 48 && src[i] <= 57)
			type = 1;
		else if (src[i] == '.' && type == 1)
			type = 3;
		else if (src[i] == 'f' && !src[i + 1] && type == 3) // un float entero creo que tiene que ser 42.0f, si no necesita el .0 añadir que si es int tamb entre
			return 2;
		else 
			return 0;
	}
	return type;
}
