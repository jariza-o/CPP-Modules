/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:22:35 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/24 22:10:24 by jariza-o         ###   ########.fr       */
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
	try {
		if (this->_vector.size() > this->_N)
			throw VectorFull();
		this->_vector.push_back(singleNumber);
	}
	catch (const VectorFull& e) {
		std::cout << e.what() << std::endl;
	}
	
}

void	Span::shortestSpan() {
	try {
		if (this->_vector.size () <= 1 || this->_N <= 1) // No sé si quitar la del vector
			throw VectorEmpty();
	}
	catch (const VectorEmpty& e) {
		std::cout << e.what() << std::endl;
	}
}

void	Span::longestSpan() {
	
}

const char*	Span::VectorFull::what() const throw() {
	return "The Vector is FULL.";
}

const char*	Span::VectorEmpty::what() const throw() {
	return "The Vector only have 1 or 0 elements.";
}
