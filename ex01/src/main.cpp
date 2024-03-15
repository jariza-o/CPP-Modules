/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:15:17 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/15 15:49:21 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main() {
	ScavTrap	c("PEPE");

	c.attack("Juan");
	std::cout << "The energyPoints of ClapTrap C is " << c.getEnergyPoints() << "." << std::endl;
	std::cout << "The hitPoints of ClapTrap C is " << c.getHitPoints() << "." << std::endl;
	std::cout << "The attackPoints of ClapTrap C is " << c.getAttackPoints() << "." << std::endl;

	return 0;	
}