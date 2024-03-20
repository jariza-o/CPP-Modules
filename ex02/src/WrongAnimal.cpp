/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:03:33 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:23:59 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal Void Constructor called." << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) {
	std::cout << "WrongAnimal Copy Constructor called." << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal Sound." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src ) {
	std::cout << "WrongAnimal Assignation Equal Operator called." << std::endl;
	this->type = src.getType();
	return *this;
}


std::string	WrongAnimal::getType() const {
	return this->type;
}