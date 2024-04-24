/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:22:35 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/24 21:10:54 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span() : _N(0) {
	std::cout << "Span Void Constructor called." << std::endl;
	this->_vector.reserve(this->_N);
}

Span::Span(const unsigned int N) : _N(N) {
	std::cout << "Span Unsigned Int Constructor called." << std::endl;
	this->_vector.reserve(this->_N);
}

Span::Span(const Span& src) : _N(src._N) {
	std::cout << "Span Copy Constructor called." << std::endl;

}

Span::~Span() {
	std::cout << "Span Destructor called." << std::endl;
	
}


Span&	Span::operator=(const Span& src) {
	std::cout << "Span Equal Operator called." << std::endl;

}

void	Span::addNumber(int singleNumber) {
	
}

void	Span::shortestSpan() {
	
}

void	Span::longestSpan() {
	
}
