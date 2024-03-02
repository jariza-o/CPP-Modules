/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:02:03 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/02 14:48:49 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	ft_replace(std::string file, std::string s1, std::string s2) {
	std::ifstream	input(file); // declaro el fichero de entrada y lo abro
	std::ofstream	output;
	std::string		line;
	size_t			pos;
	
	if (!input.is_open()) {
		std::cout << "Error: Impossible open the file." << std::endl;
		return ;
	}
	file.append(".replace");
	output.open(file.c_str()); // .c_str() hace que se pase como el ptr del string, como si fuese un string de C
	while( std::getline(input, line) ) {
		pos = line.find(s1); // Guarda la posición de donde se encuentra el str
		while( pos != std::string::npos ) {
			line.erase(pos, s1.length()); // elimina la longitud de s1 en line, a partir de pos
			line.insert(pos, s2); // inserta el string s2, en la posición pos
			pos = line.find(s1);
		}
		output << line << std::endl;
	}
	input.close();
	output.close();
}

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
	ft_replace(file, s1, s2);
	return 0;
}