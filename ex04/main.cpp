/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:02:03 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/01 16:23:13 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Error: The number of parameters is incorrect." << std::endl;
		std::cout << "Correct Input: ./Replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	
	std::string	file = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	
	if (file.empty() || s1.empty()){ // s2 creo que puede ser empty para sustituir algo por nada
		std::cout << "Error: fileSTR or s1 is empty." << std::endl;
		return 1;
	}
	
}