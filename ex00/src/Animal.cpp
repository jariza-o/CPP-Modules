/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:50:32 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/19 20:39:50 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal Void Constructor called." << std::endl;
	this->type = "Not Specified"; // No sé si quitarlo
}

Animal::Animal( std::string type ) {
	std::cout << "Animal Type Constructor called." << std::endl;
	this->type = type;
}

Animal::Animal( const Animal& src ) {
	std::cout << "Animal Copy Constructor called." << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called." << std::endl;
}

void	Animal::makeSound() {
	std::cout << "I'm an AAAAANIIMAAAAAL." << std::endl;
}
