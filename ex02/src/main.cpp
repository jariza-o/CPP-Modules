/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:15:17 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/14 16:42:25 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main() {
	FragTrap	c;

	std::cout << "The Name of FragTrap C is " << c.getName() << "." << std::endl;
	std::cout << "The energyPoints of FragTrap C is " << c.getEnergyPoints() << "." << std::endl;
	std::cout << "The hitPoints of FragTrap C is " << c.getHitPoints() << "." << std::endl;
	std::cout << "The attackPoints of FragTrap C is " << c.getAttackPoints() << "." << std::endl;

	return 0;	
}