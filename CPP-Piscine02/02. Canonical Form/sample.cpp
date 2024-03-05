/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:51:59 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/05 19:07:48 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.hpp"

Sample::Sample( void ) : _foo( 0 ) {

	std::cout << "Default Constructor called " << std::endl;

	return ;
}

Sample::Sample( int const n ) : _foo( n ) {
	std::cout << "Parametric Constructor called" << std::endl;

	return ;
}

Sample::Sample( Sample const & src ) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;

	return ;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;

	return ;
}

Sample &	Sample::operator=( Sample const & rhs ) {
	std::cout << "Assignament operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

int	Sample::getFoo( void ) const {
	return this->_foo;
}

std::ostream &	operator<<( std::ostream & o, Sample const & i ) {
	o << "The value of _foo is: " << i.getFoo();

	return o;
}
