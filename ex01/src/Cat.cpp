/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:38:24 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 19:01:46 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "Cat Void Constructor called." << std::endl;
	this->type = "Cat";
	this->_Brain = new Brain();
}

Cat::Cat( const Cat& src ) : Animal( src ) {
	std::cout << "Cat Copy Constructor called." << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called." << std::endl;
	delete this->_Brain;
}

void	Cat::makeSound() const {
	std::cout << "MIAAUU MIAAUUU" << std::endl;
}

Cat&	Cat::operator=( const Cat& src ) {
	std::cout << "Cat Assignation Equal Operator called." << std::endl;
	this->type = src.getType();
	return *this;
}

std::string	Cat::getBrainIdea( int num ) {
	return this->_Brain->getIdea(num);
}

void	Cat::setBrainIdea( int num, std::string str ) {
	this->_Brain->setIdea(num, str);
}
