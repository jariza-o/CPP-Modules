/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:27:44 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/20 14:09:01 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"
#include <iostream>

void	toUppercase(char letter) {
	
	if (letter >= 'A' && letter <= 'Z')
		std::cout << "The letter is Uppercase: " << letter << "." << std::endl;
	else{
		char l = static_cast<char>(std::toupper(static_cast<unsigned char>(letter)));
		std::cout << "The letter in Uppercase is: " << l << "." << std::endl;
	}
	
}

void	printSTR(std::string str) {
	std::cout << "Print STR: " << str << std::endl;
}

int	main () {
	toUppercase('A');
	
	char a[] =  {'a', 'B', 'c', 'd'};
	std::string str[] = {"HOLA", "ADIOS", "CALABAZA"};
	int			numbers[] = {1, 2, 3, 4, 5, 6};

	::iter(a, 4, toUppercase);
	::iter(str, 3, ::print<std::string>);
	::iter(numbers, 6, ::print<int>);

	return 0;
}