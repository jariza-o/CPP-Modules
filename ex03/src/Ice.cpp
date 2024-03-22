/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:47:44 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/22 12:47:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"

Ice::Ice( void ) : AMateria() {
	std::cout << "Ice Void Constructor called." << std::endl;
	this->type = "ice";
}

Ice::Ice( const Ice& src ) :AMateria(src) {
	std::cout << "Ice Copy Constructor called." << std::endl;
	*this = src;
}

Ice::~Ice() {
	std::cout << Ice Destructor called." << std::endl;
}

Ice*	Ice::clone() const {
	return new Ice;
}

void Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice&	Ice::operator=(const Ice& src) {
	std::cout << "Ice Equal Operator called." << std::endl;
	if (this->type != src.getType())
		this->type = src.getType();

	return *this;
}
