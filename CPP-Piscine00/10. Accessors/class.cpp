/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:53:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/21 19:37:53 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	this->setFoo( 0 );
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
	
	return;
}


Sample::~Sample( void ) {

	std::cout << "Destructor Sample called" << std::endl;
	return;
}


int	Sample::getFoo( void ) const {

	return this->_foo;
}


void	Sample::setFoo( int v ) {

	if ( v >= 0 )
		this->_foo = v;


	return;
}

