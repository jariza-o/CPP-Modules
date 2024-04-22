/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:07:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/22 17:16:52 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"
#include <iostream>
#include <stdexcept>

// int	main() {
// 	int* a = new int();

// 	std::cout << "Sin nada: " << a << std::endl;
// 	std::cout << "Pasando Referencia: " << &a << std::endl;
// 	std::cout << "Pasando ptr: " << *a << std::endl;

// 	return 0;
// }

int	main() {
	
	Array<std::string>	a;
	Array<std::string>	a2(10);

	Array<int>	i;
	Array<int>	i2(7);
	Array<int>	i3(i2);

	a2[0] = "ES 0";
	try {
		a2[9] = "ES 9";
		a2[10] = "ES 10";
	} catch (const std::exception& e) {
		std::cout << "TEST" << std::endl;
	}
	i = i2 ;
	a = a2;
	try {
		for (int i = 0; i < a.size(); i++) {
			std::cout << a.getData(i) << std::endl;
		}
	} catch (const std::exception& e) {
		std::cout << "Array void" << std::endl;
	}
	
	i3[6] = 9;
	std::cout << "i3[6] es: " << i3[6] << "." << std::endl;

}
