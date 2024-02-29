/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 22:19:46 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/29 22:53:26 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB( std::string Name ) {
	this->_Name = Name;
	// No se si crear Weapon y declararlo como vacío
}

HumanB::HumanB( std::string Name, Weapon& Weapon) {
	this->_Name = Name;
	this->_Weapom = &Weapon;
}

HumanB::~HumanB() {
	
}

void	HumanB::setWeapon( Weapon& Weapon ) {
	this->_Weapom = &Weapon;
}

void	HumanB::attack( void ) const {
	std::cout << this->_Name << " attacks with their " << this->_Weapom->getType() << std::endl;
}