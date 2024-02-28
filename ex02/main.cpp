/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:41:02 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/28 12:05:42 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	std::string		str = "HI IS THE BRAIN";
	std::string*	stringPTR = &str; //PUNTERO
	std::string&	stringREF = str; //REFERENCIA

	std::cout << "Dirección de memoria del str: " << &str << std::endl;
	std::cout << "Dirección de memoria del puntero: " << stringPTR << std::endl;
	std::cout << "Dirección de memoria dela referencia: " << &stringREF << std::endl; //Para que te imprima la dirección de memoria, y no el contenido hay que llamar con & (simbolo de ref)
	
	std::cout << "Valor de str: " << str << std::endl;
	std::cout << "Valor de stringPTR: " << *stringPTR << std::endl; //se usa * porque es el valor
	std::cout << "Valor de stringPTR: " << stringREF << std::endl;

	return 0;
}