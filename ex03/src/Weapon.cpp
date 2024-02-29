/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 22:05:27 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/29 22:13:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon() {
	
}

Weapon::Weapon( std::string type ){
	this->_type = type;
}

Weapon::~Weapon() {
	
}

const std::string&	Weapon::getType( void ) const {
	return this->_type;
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}
