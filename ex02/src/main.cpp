/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:07:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/20 15:33:47 by jariza-o         ###   ########.fr       */
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
	Array<int>	b(7);
	// Array	c(b);

	a = a2;
	a[0] = "ES 0";
	a[9] = "ES 10";
	try {
		for (int i = 0; i < a.size(); i++) {
			std::cout << a.getData(i) << std::endl;
		}
	} catch (const std::exception& e) {
		std::cout << "Array void" << std::endl;
	}
}
