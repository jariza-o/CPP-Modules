/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:53:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/22 16:25:28 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;
	return;
}


Sample::~Sample( void ) {

	std::cout << "Destructor Sample called" << std::endl;
	return;
}


void	Sample::bar( void ) const {

	std::cout << "Member function bar called" << std::endl;
	return;
}

