/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 07:22:24 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/06 08:19:27 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default Constructor called " << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed( Fixed const& src) {
	std::cout << "Copy Constructor called " << std::endl;
	// this->_fixedPoint = src.getRawBits(); //si lo hago así no se muestra linea del operator
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;

	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPoint = raw;
}

Fixed& Fixed::operator=( Fixed const& src ){
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &src) //Se suele hacer para evitar la autoasignación
		this->_fixedPoint = src.getRawBits();

	return *this;
}
