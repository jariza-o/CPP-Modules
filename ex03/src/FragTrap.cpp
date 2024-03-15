/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:21:01 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/15 16:11:55 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int FragTrap::pHit = 100;
int FragTrap::pAttack = 30;

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
