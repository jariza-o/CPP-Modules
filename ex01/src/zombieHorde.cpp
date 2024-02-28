/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:13:22 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/28 11:41:41 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie*	horde = new Zombie[N]; //No es horda[N] porque no pide que devuelva un ptr, no **ptr. Es un ptr que apunta a un array de Zombie

	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	
	return horde;
}
