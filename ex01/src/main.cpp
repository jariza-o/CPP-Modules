/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:45:56 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/28 08:53:10 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main( void ) {
	Zombie* n1 = newZombie("Juan");

	n1->announce();
	randomChump("Pedro");
	
	delete n1; //Como es un puntero, se reserva automaticamente la memoria y hay que liberarlo
	return 0;
}
