/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:38:24 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:08:49 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "Cat Void Constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat& src ) : Animal( src ) {
	std::cout << "Cat Copy Constructor called." << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "MIAAUU MIAAUUU" << std::endl;
}

Cat&	Cat::operator=( const Cat& src ) {
	std::cout << "Cat Assignation Equal Operator called." << std::endl;
	this->type = src.getType();
	return *this;
}
