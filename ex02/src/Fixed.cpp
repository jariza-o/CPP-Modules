/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 07:22:24 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/07 20:20:29 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) :_fixedPoint( 0 ) {
	// std::cout << "Default Constructor called " << std::endl;
}

Fixed::Fixed( int const i ) :_fixedPoint( i << this->_fractionalBits ) {
	// std::cout << "Int Constructor called " << std::endl;
}

Fixed::Fixed( float const i ) {
	// std::cout << "Float Constructor called " << std::endl;
	this->_fixedPoint = roundf(i * (1 << this->_fractionalBits));
}

Fixed::Fixed( Fixed const& src) {
	// std::cout << "Copy Constructor called " << std::endl;
	// this->_fixedPoint = src.getRawBits(); //si lo hago así no se muestra linea del operator
	*this = src;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;

	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPoint = raw;
}

Fixed& Fixed::operator=( Fixed const& src ){
	// std::cout << "Copy assignment operator called" << std::endl;
	if(this != &src) //Se suele hacer para evitar la autoasignación
		this->_fixedPoint = src.getRawBits();

	return *this;
}

float	Fixed::toFloat( void ) const {
	return (float)this->_fixedPoint / (float)(1 << this->_fractionalBits); // Aqui no se usa roundf porque "ya está en float"
}

int	Fixed::toInt( void ) const {
	return this->_fixedPoint >> this->_fractionalBits;
}

std::ostream&	operator<<( std::ostream& o,  Fixed const& src ) {
	o << src.toFloat();

	return o;
}

bool	Fixed::operator>( Fixed const& src ) const {
	return this->_fixedPoint > src._fixedPoint;
}

bool	Fixed::operator<( Fixed const& src ) const {
	return this->_fixedPoint < src._fixedPoint;
}

bool	Fixed::operator>=( Fixed const& src ) const {
	return this->_fixedPoint >= src._fixedPoint;
}

bool	Fixed::operator<=( Fixed const& src ) const {
	return this->_fixedPoint >= src._fixedPoint;
}

bool	Fixed::operator==( Fixed const& src ) const {
	return this->_fixedPoint == src._fixedPoint;
}

bool	Fixed::operator!=( Fixed const& src ) const {
	return this->_fixedPoint != src._fixedPoint;
}

Fixed	Fixed::operator+( Fixed const& src ) const {
	return Fixed(this->toFloat() + src.toFloat()); // se devuelve Fixed() porque la funcion devuelve la clase
}												   // se usa .toFloat para asegurarte de que se funcionen los int

Fixed	Fixed::operator-( Fixed const& src ) const {
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*( Fixed const& src ) const {
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/( Fixed const& src ) const {
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed&	Fixed::operator++() { //prefijo
	++this->_fixedPoint;

	return *this;
}
Fixed&	Fixed::operator--() {
	--this->_fixedPoint;

	return *this;
}

Fixed	Fixed::operator++( int ) { //postfijo
	Fixed	temp = *this;
	++(*this);

	return temp;
}

Fixed	Fixed::operator--( int ) {
	Fixed	temp = *this;
	--(*this);

	return temp;
}

Fixed&	Fixed::min( Fixed& n1, Fixed& n2 ) { // una funcion static no hay que ponerlo en el .cpp
	if (n1 < n2)
		return n1;
	return n2;
}

Fixed const&	Fixed::min( Fixed const& n1, Fixed const& n2 ) {
	if (n1 < n2)
		return n1;
	return n2;
}
Fixed&	Fixed::max( Fixed& n1, Fixed& n2 ) {
	if (n1 > n2)
		return n1;
	return n2;
}
Fixed const&	Fixed::max( Fixed const& n1, Fixed const& n2 ) {
	if (n1 > n2)
		return n1;
	return n2;
}
