/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:31:35 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/02 10:40:45 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
	
}

Harl::~Harl() {
	
}

void	Harl::complain( std::string level ) {
	
}

void	Harl::debug( void ) {
    std::cout << "Debuging" << std::endl;
}

void	Harl::info( void ) {
    std::cout << "Info" << std::endl;
}

void	Harl::warning( void ) {
    std::cout << "Warning" << std::endl;
}

void	Harl::error( void ) {
    std::cout << "ERROR 404 NOT FOUND" << std::endl;
}
