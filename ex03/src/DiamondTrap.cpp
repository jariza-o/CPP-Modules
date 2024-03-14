/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:14:10 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/14 21:07:25 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap Void Constructor called." << std::endl;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackPoints();
}

DiamondTrap::DiamondTrap( std::string Name ) :_Name( Name ), ScavTrap( Name ), FragTrap( Name ) {
	std::cout << "DiamondTrap Name Constructor called." << std::endl;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackPoints();
	std::cout << "ARASTEPAAAAA: " << FragTrap::getAttackPoints() << std::endl;
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

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& src) {
	if (this != &src) {
		this->_Name = src._Name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}