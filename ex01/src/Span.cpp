/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:22:35 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/25 16:51:27 by jariza-o         ###   ########.fr       */
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

Span::Span(const Span& src) {
	std::cout << "Span Copy Constructor called." << std::endl;
	if (this != &src) {
		this->_N = src._N;
		this->_vector = src._vector;
	}
}

Span::~Span() {
	std::cout << "Span Destructor called." << std::endl;
	
}


Span&	Span::operator=(const Span& src) {
	std::cout << "Span Equal Operator called." << std::endl;
	if (this != &src) {
		this->_N = src._N;
		this->_vector = src._vector;
	}
	return *this;
}

void	Span::addNumber(int singleNumber) {
	try {
		if (this->_vector.size() >= this->_N)
			throw VectorFull();
		this->_vector.push_back(singleNumber);
	}
	catch (const VectorFull& e) {
		std::cout << e.what() << std::endl;
	}
	
}

int	Span::shortestSpan() {
	try {
		if (this->_vector.size() <= 1 || this->_N <= 1) // No sé si quitar la del vector
			throw VectorEmpty();
		int	span = this->_vector[0] - this->_vector[1];
		if (span < 0)
			span *= -1;
		for (size_t i = 0; i < this->_vector.size(); i++) {
			for (size_t n = i + 1; n < this->_vector.size(); n++) {
				int	temp = this->_vector[i] - this->_vector[n];
				if (temp < 0)
					temp *= -1;
				if (span > temp)
					span = temp;
			}
		}
		return span;
	}
	catch (const VectorEmpty& e) {
		std::cout << e.what() << std::endl;
	}
	return -1;
}

int	Span::longestSpan() {
	try {
		if (this->_vector.size() <= 1 || this->_N <= 1) // No sé si quitar la del vector
			throw VectorEmpty();
		int	span = this->_vector[0] - this->_vector[1];
		if (span < 0)
			span *= -1;
		for (size_t i = 0; i < this->_vector.size(); i++) {
			for (size_t n = i + 1; n < this->_vector.size(); n++) {
				int	temp = this->_vector[i] - this->_vector[n];
				if (temp < 0)
					temp *= -1;
				if (span < temp)
					span = temp;
			}
		}
		return span;
	}
	catch (const VectorEmpty& e) {
		std::cout << e.what() << std::endl;
	}
	return -1;
}

const char*	Span::VectorFull::what() const throw() {
	return "The Vector is FULL.";
}

const char*	Span::VectorEmpty::what() const throw() {
	return "The Vector only have 1 or 0 elements.";
}
