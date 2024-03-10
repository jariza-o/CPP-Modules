/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 07:22:24 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/10 08:41:59 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) :_fixedPoint( 0 ) {
	std::cout << "Default Constructor called " << std::endl;
}

Fixed::Fixed( int const i ) :_fixedPoint( i << this->_fractionalBits ) { // se hace i << this->_fractionalBits, porque te pide que el constructor lo convierta a la correspodiente fixed-point value
	std::cout << "Int Constructor called " << std::endl;
}

Fixed::Fixed( float const i ) {
	std::cout << "Float Constructor called " << std::endl;
	this->_fixedPoint = roundf(i * (1 << this->_fractionalBits));
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

/* Divide el valor entero almacenado en this->value por el valor flotante
resultante de (1 << this->bits). Esta división nos da el valor en punto flotante
equivalente al valor en punto fijo representado por el objeto Fixed. La razón para
dividir por (1 << this->bits) es que queremos "restaurar" la parte fraccionaria a
su valor original, ya que inicialmente la habíamos desplazado hacia la izquierda
para convertir el número a punto fijo. */

float	Fixed::toFloat( void ) const {
	return (float)this->_fixedPoint / (float)(1 << this->_fractionalBits); // Aqui no se usa roundf porque "ya está en float"
}

int	Fixed::toInt( void ) const {
	return this->_fixedPoint >> this->_fractionalBits; //como lo hemos almacenado en bits, lo devolvemos normal
}

std::ostream&	operator<<( std::ostream& o,  Fixed const& src ) {
	o << src.toFloat();

	return o;
}
