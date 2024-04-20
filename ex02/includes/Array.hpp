/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:53:42 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/20 15:36:22 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <stdexcept>

template<typename T>
class Array {
public:
	Array() : s(0) {
		std::cout << "Array Void Constructor called." << std::endl;
		this->_data = new T[s];
	}
	Array(unsigned int n) : s(n) {
		std::cout << "Array Unsigned Int Constructor called." << std::endl;
		this->_data = new T[s];
		
		for (unsigned int i = 0; i < n; i++)
			this->_data[i] = T();
	}
	Array(const Array<T>& src) { // PROQUE SE PONE <T>???
		std::cout << "Array Copy Constructor called." << std::endl;
		if (this != src) {
			this->s = src.s;
			this->_data = new T[this->s];
			for (int i = 0; i < src.size(); i++)
				this->_data[i] = src._data[i];
		}
	}

	// Array(const Array& src) {
	// 	std::cout << "Array Copy Constructor called." << std::endl;
	// 	if (this != src) {
	// 		this->s = src.s;
	// 		this->_data = new T[this->s];
	// 	}
	// }

	~Array() {
		std::cout << "Array Destructor called." << std::endl;
		delete [] this->_data;
	}

	Array<T>&	operator=(const Array<T>& src) {
		std::cout << "Array Equal Operator called." << std::endl;
		if (this != src) {
			delete [] this->_data;
			this->s = src.s;
			this->_data = new T[this->s];
			for (int i = 0; i < src.size(); i++)
				this->_data[i] = src._data[i];
		}
		return *this;
	}

	// Array&	operator=(const Array& src) {
	// 	std::cout << "Array Equal Operator called." << std::endl;
	// 	if (this != src) {
	// 		this->s = src.s;
	// 		this->_data = new T[this->s];
	// 	}
	// 	return *this;
	// }

	T&	operator[](unsigned int index) { // Operador de subindice para que me saque si no existe
		if (index >= size)
			throw std::exception();
		return this->_data[index];
	}

	int		size() const {
		return this->s;
	}

	T		getData(unsigned int n) const {
		return this->_data[n];
	}

private:
	T*			_data;
	unsigned	int s;
};

#endif
