/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:31:35 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/02 15:01:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
	
}

Harl::~Harl() {
	
}

void	Harl::complain( std::string level ) {
	void (Harl::*f[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; //Declaras una función que es un puntero de 4 funciones, a las que no les pasas nada.
    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;

    while (++i < 4) {
        if (level == lvl[i]) {
            (this->*f[i])();
            return ;
        }
    }
    if (i >= 4 )
        std::cout << level << ": Not is Imporatant." << std::endl;
    return ;
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
