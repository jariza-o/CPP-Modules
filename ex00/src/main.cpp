/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:12:34 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/23 17:44:12 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <iostream>

int	main() {

	// std::vector<int> miVector = {1, 33, 45, 343, 5465, 53454}; // Esta forma solo funciona en C++11
	std::vector<int>	miVector;
	std::vector<int>	vec(5, 0);
	
	// Añadir los valores uno por uno al vector por que es C++98
    miVector.push_back(1);
    miVector.push_back(33);
    miVector.push_back(45);
    miVector.push_back(343);
    miVector.push_back(5465);
    miVector.push_back(53454);
	
	easyfind(vec, 0);
	easyfind(miVector, 33);
	try {
		easyfind(miVector, 34);
	}
	catch (const NotFounded& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
