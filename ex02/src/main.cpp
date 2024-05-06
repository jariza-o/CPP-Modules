/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:11:04 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/06 11:17:50 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <stdexcept>

int	main(int argc, char **argv) {
	if (argc > 1) {
		try {
			PmergeMe	list(argv);
			std::cout << "Before: ";
			list.printList(0);
			std::cout << "After:  ";
			list.printList(1);
			std::cout << "Time to process a range of 5 elements with std::list : ";
			// POENR AQUI TIEMPO
			std::cout << " us" << std::endl;
			std::cout << "Time to process a range of 5 elements with std::vector : ";
			// POENR AQUI TIEMPO
			std::cout << " us" << std::endl;
		}
		catch (const std::exception& e) {
			std::cout << "ERROR" << std::endl;
		}
	}
	return 0;
}