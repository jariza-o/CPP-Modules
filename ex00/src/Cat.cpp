/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:38:24 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/19 20:39:25 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "Cat Void Constructor called." << std::endl;
	this->type = "Not Specified"; // No sé si quitarlo
}

Cat::Cat( std::string type ) : Animal( type ) {
	std::cout << "Cat Type Constructor called." << std::endl;
	this->type = type;
}

Cat::Cat( const Cat& src ) : Animal( src ) {
	std::cout << "Cat Copy Constructor called." << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called." << std::endl;
}

void	Cat::makeSound() {
	std::cout << "MIAAUU MIAAUUU" << std::endl;
}