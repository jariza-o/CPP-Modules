/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:14:10 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/15 16:17:21 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap Void Constructor called." << std::endl;
	// this->_hitPoints = FragTrap::getHitPoints(); // No Puedo definirlo como la de abajo por el fallo de c++
	this->_energyPoints = ScavTrap::getEnergyPoints(); 
	// this->_attackDamage = FragTrap::getAttackPoints();
	this->_hitPoints = FragTrap::pHit;
	this->_attackDamage = FragTrap::pAttack;
	ClapTrap::_Name.append("_clap_name");
}

DiamondTrap::DiamondTrap( std::string Name ) :_Name( Name ), ScavTrap( Name ), FragTrap( Name ) {
	std::cout << "DiamondTrap Name Constructor called." << std::endl;
	// this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	// this->_attackDamage = FragTrap::getAttackPoints();
	this->_hitPoints = FragTrap::pHit;
	this->_attackDamage = FragTrap::pAttack;
	ClapTrap::_Name.append("_clap_name");
}

DiamondTrap::DiamondTrap( const DiamondTrap& src ) : ScavTrap( src ), FragTrap( src ) {
	std::cout << "DiamondTrap Copy Constructor called." << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap Copy Destructor called." << std::endl;
}

void	DiamondTrap::whoAmi() {
	std::cout << "DiamondTrap Name: " << this->_Name << "." << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::_Name << "." << std::endl;
}
