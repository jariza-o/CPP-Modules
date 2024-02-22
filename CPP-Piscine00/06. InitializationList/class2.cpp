/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class2.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:53:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/20 20:04:38 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class2.hpp"

Sample2::Sample2( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {

	std::cout << "Constructor Sample2 called " << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return;
}


Sample2::~Sample2( void ) {
	
	std::cout << "Destructor Sample2 called" << std::endl;
	return;
}

