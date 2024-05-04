/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:15:33 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/04 20:02:33 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <stdexcept>

int main(int argc, char **argv) {
	if (argc == 2) {
		try {
			RPN	rpn(argv[1]);
		}
		catch(const std::exception& e) {
			std::cout << "Error" << std::endl;
		}
	}
	else
		std::cout << "The number of arguments is incorrect!!" << std::endl;
}
