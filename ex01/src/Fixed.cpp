/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 07:22:24 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/06 16:30:34 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) :_fixedPoint( 0 ) {
	std::cout << "Default Constructor called " << std::endl;
}

Fixed::Fixed( int const i ) :_fixedPoint( i ) {
	std::cout << "Int Constructor called " << std::endl;
}

Fixed::Fixed( float const i ) :_fixedPoint( roundf(i) ) {
	std::cout << "Float Constructor called " << std::endl;
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

float	Fixed::toFloat( void ) const {
	return roundf(this->_fixedPoint);
}

int	Fixed::toInt( void ) const {
	return this->_fixedPoint;
}

std::ofstream& operator<<( std::ofstream& o,  Fixed const& src ) {

}
