/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:26:05 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/25 16:44:41 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria( void ) {
	std::cout << "AMateria Void Constructor called." << std::endl;
	// No necesita asignarle el tipo, ya que no se va a poder declarar desde una que no sea heredera
}

AMateria::AMateria( const AMateria& src ) {
	std::cout << "AMateria Copy Constructor called." << std::endl;
	*this = src;
}

AMateria::AMateria( std::string const & type ) { // NO SE SI TENG
	std::cout << "AMateria Type Constructor called." << std::endl;
	this->type = type;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor called." << std::endl;
}

std::string const& AMateria::getType() const {
	return this->type;
}

AMateria&	AMateria::operator=(const AMateria& src ) {
	std::cout << "AMateria Equal Operator called." << std::endl;
	if (this->type != src.getType())
		this->type = src.getType();

	return *this;
}
