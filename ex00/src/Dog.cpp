/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:35:27 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:08:41 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal() {
	std::cout << "Dog Void Constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog& src ) : Animal( src ) {
	std::cout << "Dog Copy Constructor called." << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "GUUAAU GUUAU" << std::endl;
}

Dog&	Dog::operator=( const Dog& src ) {
	std::cout << "Dog Assignation Equal Operator called." << std::endl;
	this->type = src.getType();
	return *this;
}
