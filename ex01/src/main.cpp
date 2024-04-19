/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:27:44 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/19 16:55:35 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

void	toUppercase(char letter) {
	
	if (letter >= 'A' && letter <= 'Z')
		std::cout << "The letter is Uppercase: " << letter << "." << std::endl;
	else{
		char l = static_cast<char>(std::toupper(static_cast<unsigned char>(letter)));
		std::cout << "The letter in Uppercase is: " << l << "." << std::endl;
	}
	
}

int	main () {
	toUppercase('A');
	
	char a[] =  {'a', 'B', 'c', 'd'};
	
	::iter(a, 4, toUppercase);
}