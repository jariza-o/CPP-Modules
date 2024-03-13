/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:15:17 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/13 18:26:35 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main() {
	ClapTrap	a;
	ClapTrap	b("Jose");
	ClapTrap	c(ClapTrap("Adolfo"));
	
	b.attack("Josefina");
	b.setHitPoints(0);
	b.attack("Josefina");

	a.setAttackPoints(2);
	a.setName("EL NANO");
	a.takeDamage(11);
	
	c.setHitPoints(2);
	c.beRepaired(7);
	std::cout << "The life of ClapTrap C is " << c.getEnergyPoints() << "." << std::endl;

	return 0;	
}