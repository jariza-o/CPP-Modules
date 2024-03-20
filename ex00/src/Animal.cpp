/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:50:32 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:09:03 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal Void Constructor called." << std::endl;
	this->type = "Animal";
}

Animal::Animal( const Animal& src ) {
	std::cout << "Animal Copy Constructor called." << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called." << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "I'm an AAAAANIIMAAAAAL." << std::endl;
}

Animal&	Animal::operator=(const Animal& src ) {
	std::cout << "Animal Assignation Equal Operator called." << std::endl;
	this->type = src.getType();
	return *this;
}


std::string	Animal::getType() const {
	return this->type;
}
