/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:10:46 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/22 13:10:46 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"

Cure::Cure( void ) : AMateria() {
	std::cout << "Cure Void Constructor called." << std::endl;
	this->type = "cure";
}

Cure::Cure( const Cure& src ) :AMateria(src) {
	std::cout << "Cure Copy Constructor called." << std::endl;
	*this = src;
}

Cure::~Cure() {
	std::cout << "Cure Destructor called." << std::endl;
}

Cure*	Cure::clone() const {
	return new Cure;
}

void Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure&	Cure::operator=(const Cure& src) {
	std::cout << "Cure Equal Operator called." << std::endl;
	if (this->type != src.getType())
		this->type = src.getType();

	return *this;
}
