/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:45:56 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/28 11:22:12 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main( void ) {
	int		size = 7;
	Zombie*	horde = zombieHorde(size, "Juan");

	for (int i = 0; i < size; i++) {
		std::cout << "Zombie Nº" << i << ":  ";
		horde[i].announce();
	}

	delete [] horde;

	return 0;
}
