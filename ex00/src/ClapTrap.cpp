/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:21:12 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/12 15:39:07 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "Void Contructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( std::string Name ) {
	std::cout << "Name Contructor called" << std::endl;
	this->_Name = Name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

void ClapTrap::attack( const std::string& target ) {
	std::cout << "ClapTrap " << this->_Name << "attacks " << target << ", causing <damage> points of damage!"
}

void ClapTrap::takeDamage( unsigned int amount ) {
	
}

void ClapTrap::beRepaired( unsigned int amount ) {
	
}
