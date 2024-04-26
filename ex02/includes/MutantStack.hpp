/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:56:23 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/26 15:57:02 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_H
# define MUTANSTACK_H

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T> { // Esta clase hereda de un stack tipo T porque, class es un containers que se forma a partir de un template
public:
	MutantStack() : std::stack<T>() {
		std::cout << "MutanStack Void Constructor called." << std::endl;
	}
	MutantStack(const MutantStack& src) : std::stack<T>(src) {
		std::cout << "MutanStack Copy Constructor called." << std::endl;
	}
	~MutantStack() {
		std::cout << "MutanStack Destructor called." << std::endl;
	}

	MutantStack&	operator=(const MutantStack<T>& src) {
		std::cout << "MutanStack Equal Operator called." << std::endl;
		if (*this != src)
			 std::stack<T>::operator=(src);
		return *this;
	}
	
	typedef typename std::stack<T>::container_type::iterator	iterator;

	iterator	begin() {
		return this->c.begin();
	}

	iterator	end() {
		return this->c.end();
	}

	// NO SE DECLARA EL STACK EN PRIVATE PORQUE LA CLASE ES YA UN STACK
};

#endif