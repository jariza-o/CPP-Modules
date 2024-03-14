/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:21:01 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/14 20:56:11 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << "FragTrap Void Constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string Name ) : ClapTrap( Name ) {
	std::cout << "FragTrap Name Constructor called." << std::endl;
	this->_Name = Name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& src ) : ClapTrap( src ) {
	std::cout << "FragTrap Copy Constructor called." << std::endl;
	*this = src;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap Copy Destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void) {
    std::cout << "[Positive high]: fives request." << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& src) {
	if (this != &src) {
		this->_Name = src._Name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}
