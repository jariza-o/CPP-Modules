/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:53:42 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/22 17:19:15 by jariza-o         ###   ########.fr       */
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
	Array(const Array<T>& src) { // Se pone <T> para indicar que el constructor de copia también es una plantilla y debe funcionar
		std::cout << "Array Copy Constructor called." << std::endl;
		if (this != &src) { // Tiene que ser referencia para que compile
			this->s = src.s;
			this->_data = new T[this->s];
			for (int i = 0; i < src.size(); i++)
				this->_data[i] = src._data[i];
		}
	}

	~Array() {
		std::cout << "Array Destructor called." << std::endl;
		delete [] this->_data;
	}

	Array<T>&	operator=(const Array<T>& src) {
		std::cout << "Array Equal Operator called." << std::endl;
		if (this != &src) {
			delete [] this->_data;
			this->s = src.s;
			this->_data = new T[this->s];
			for (int i = 0; i < src.size(); i++)
				this->_data[i] = src._data[i];
		}
		return *this;
	}

	T&	operator[](unsigned int index) { // Operador de subindice para que me saque si no existe
		if (index >= s)
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
	T*				_data;
	unsigned int	s;
};

#endif
