/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:40:16 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:54:50 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain Void Constructor called." << std::endl;
}

Brain::Brain( const Brain& src ) {
	std::cout << "Brain Copy Constructor called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called." << std::endl;
}

std::string	Brain::getIdea( int num ) const {
	if (num < 0 || num >= 100)
		return "ERROR: The Idea ID is incorrect.";
	return this->_ideas[num];
}

void	Brain::setIdea( int num, std::string str ) {
	this->_ideas[num] = str;
}
