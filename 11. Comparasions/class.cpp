/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:53:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/21 20:38:23 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Sample::Sample( int v ) : _foo( v ) {

	std::cout << "Constructor called" << std::endl;
	return;
}


Sample::~Sample( void ) {

	std::cout << "Destructor Sample called" << std::endl;
	return;
}


int	Sample::getFoo( void ) const {

	return this->_foo;
}


int	Sample::compare( Sample *other ) const {

	if ( this->_foo < other->getFoo() )
		return -1;
	else if ( this->_foo > other->getFoo() )
		return 1;


	return 0;
}

