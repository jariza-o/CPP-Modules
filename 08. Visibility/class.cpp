/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:53:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/21 17:02:22 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;
	
	this->publicBar();
	this->_privateBar();
	
	return;
}


Sample::~Sample( void ) {

	std::cout << "Destructor Sample called" << std::endl;
	return;
}


void	Sample::publicBar( void ) const {

	std::cout << "Member function publicBar called" << std::endl;
	return;
}


void	Sample::_privateBar( void ) const {

	std::cout << "Member function _privateBar called" << std::endl;
	return;
}

