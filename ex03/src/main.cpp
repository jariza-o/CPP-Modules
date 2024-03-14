/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:15:17 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/14 21:05:51 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main() {
	DiamondTrap	c("PEPE");

	c.whoAmi();
	c.attack("ddd");

	// std::cout << "The Name of FragTrap C is " << c.ClapTrap::getName() << "." << std::endl;
	// std::cout << "The energyPoints of FragTrap C is " << c.getEnergyPoints() << "." << std::endl;
	// std::cout << "The hitPoints of FragTrap C is " << c.getHitPoints() << "." << std::endl;
	// std::cout << "The attackPoints of FragTrap C is " << c.getAttackPoints() << "." << std::endl;

	return 0;	
}