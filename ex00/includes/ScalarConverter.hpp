/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:28:43 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/16 15:35:33 by jariza-o         ###   ########.fr       */
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
};

#endif