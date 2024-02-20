/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:53:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/20 19:42:36 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Sample::Sample( void ) {

	std::cout << "constructor called " << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();

	return;
}


Sample::~Sample( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}


void	Sample::bar( void ) {
	
	std::cout << "Member function bar called" << std::endl;
	std::cout << "this->foo bar called: " << this->foo << std::endl;
	return;
}
