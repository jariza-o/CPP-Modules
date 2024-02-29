/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 22:04:59 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/29 22:53:18 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA( std::string Name, Weapon& Weapon ) {
	this->_Name = Name;
	this->_Weapom = &Weapon;
}

HumanA::~HumanA() {
	
}

void	HumanA::attack( void ) const {
	std::cout << this->_Name << " attacks with their " << this->_Weapom->getType() << std::endl;
}