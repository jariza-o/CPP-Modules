/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:48:14 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/27 22:22:06 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie() {
	
}

Zombie::~Zombie() {
	
}

void	Zombie::announce( void ) {
	std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::putName( std::string Name ) {
	this->_Name = Name;
}
