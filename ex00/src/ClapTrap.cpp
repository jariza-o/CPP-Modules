/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:21:12 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/13 18:24:23 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "Void Constructor called" <<std::endl;
	this->_Name = "NotName";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( std::string Name ) {
	std::cout << "Name Constructor called" << std::endl;
	this->_Name = Name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& src ) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack( const std::string& target ) {
	if (this->checkInfo()) {
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "ClapTrap " << this->_Name << " has received a damage of " <<  amount << "." << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		std::cout << "ClapTrap " << this->_Name << " is died." << std::endl;
}

bool	ClapTrap::checkInfo( void ) const {
	if (this->_hitPoints <= 0){
		std::cout << "ClapTrap " << this->_Name << " hasn't Hit Points." << std::endl;
		return 0;
	}
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_Name << " hasn't Energy points." << std::endl;
		return 0;
	}
	return 1;

}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->checkInfo()) {
		std::cout << "ClapTrap " << this->_Name << " is repairing." << std::endl;
		if (this->_hitPoints < 10)
			this->_hitPoints += amount;
		if (this->_hitPoints > 10)
			this->_hitPoints = 10;
		this->_energyPoints--;
	}
}

std::string	ClapTrap::getName( void ) const {
	return this->_Name;
}

int	ClapTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

int	ClapTrap::getEnergyPoints( void ) const {
	return this->_energyPoints;
}

int	ClapTrap::getAttackPoints( void ) const {
	return this->_attackDamage;
}

void	ClapTrap::setName( const std::string Name ) {
	this->_Name = Name;
}

void	ClapTrap::setHitPoints( unsigned int amount ) {
	this->_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints( unsigned int amount ) {
	this->_energyPoints = amount;
}

void	ClapTrap::setAttackPoints( unsigned int amount ) {
	this->_attackDamage = amount;
}
