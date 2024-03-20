/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:02:55 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:08:30 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	std::cout << "WrongCat Void Constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& src ) : WrongAnimal( src ) {
	std::cout << "WrongCat Copy Constructor called." << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called." << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat Sound." << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& src ) {
	std::cout << "WrongCat Assignation Equal Operator called." << std::endl;
	this->type = src.getType();
	return *this;
}
