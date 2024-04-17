/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:28:43 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/17 08:23:16 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SACLARCONVERTER_H
# define SACLARCONVERTER_H

#include <iostream>

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& src);
	ScalarConverter(char* str);
	~ScalarConverter();

	ScalarConverter&	operator=(const ScalarConverter& src);

	void	convert(std::string src);

	// enum	getEnum() const; // Creo que debería devolver int realmente

private:
	enum	_listTypes {
		Char, // 0
		Int, // 1
		Float, // 2
		Double, // 3
		Nan, // 4
		Inf, // 5
	};
	int		_type; // Para almacenar el tipo
	int	checkArgument(std::string src);
};

#endif