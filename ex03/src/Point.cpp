/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:14:52 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/10 11:47:54 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include "../includes/Fixed.hpp"

Point::Point( void ) :_x( 0 ), _y( 0 ) {
	std::cout << "Default Constructor called " << std::endl;
}

Point::Point( float const x, float const y ) :_x( x ), _y( y ) {
	std::cout << "Int Constructor called " << std::endl;
	// this->_x = x; // Da fallo en VS al principio porque no esta el operator= hecho
	// this->_y = y;
}

Point::Point( Point const& src ) {
	std::cout << "Copy Constructor called " << std::endl;
	*this = src;
}

Point::~Point() {
	std::cout << "Destructor called" << std::endl;
}

Point&	Point::operator=( Point const& src ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &src) {
		static_cast<Fixed>(this->_x) = src.getX(); // se usa una conevrsión de tipo para que funcione, tambien se puede poner en vez de eso: (Fixed) this->_x, pero no es una sintaxis politicamente correcta
		(Fixed) this->_y = src.getY();
	}

	return *this;
}

Fixed	Point::getX( void ) const {
	return this->_x;
}

Fixed	Point::getY( void ) const {
	return this->_y;
}
