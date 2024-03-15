/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:37:44 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/15 15:50:16 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "ScavTrap Void Constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string Name ) : ClapTrap( Name ) {
	std::cout << "ScavTrap Name Constructor called." << std::endl;
	this->_Name = Name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& src ) : ClapTrap( src ) {
	std::cout << "ScavTrap Copy Constructor called." << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap Copy Destructor called." << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	if (this->checkInfo()) {
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}
