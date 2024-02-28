/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:48:14 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/28 08:56:13 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie( std::string Name ) {
	this->_Name = Name;
}

Zombie::~Zombie() {
	std::cout << this->_Name << " is deleted" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

