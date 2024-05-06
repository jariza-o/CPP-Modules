/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:11:04 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/06 18:01:14 by jariza-o         ###   ########.fr       */
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
			list.printCall(0);
			list.sort();
			std::cout << "After:  ";
			list.printCall(1);
			std::cout << "Time to process a range of " << list.getSize() << " elements with std::list : " << list.getDuration(0) << " us" << std::endl;
			std::cout << "Time to process a range of " << list.getSize() << " elements with std::vector : " <<	list.getDuration(1) << " us" << std::endl;
		}
		catch (const std::exception& e) {
			std::cout << "ERROR" << std::endl;
		}
	}
	return 0;
}