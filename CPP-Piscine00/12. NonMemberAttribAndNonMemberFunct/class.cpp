/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:53:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/22 16:11:50 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return;
}


Sample::~Sample( void ) {

	std::cout << "Destructor Sample called" << std::endl;
	Sample::_nbInst -= 1;

	return;
}


int	Sample::getNbInst( void ) {

	return Sample::_nbInst;
}


int	Sample::_nbInst = 0;
