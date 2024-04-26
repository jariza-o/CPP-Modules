/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:56:23 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/25 18:32:20 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_H
# define MUTANSTACK_H

#include <stack>
#include <iostream>

template<typename T>
class MutantStack {
public:
	MutantStack() {
		std::cout << "MutanStack Void Constructor called." << std::endl;
	}
	MutantStack(const MutantStack& src) {
		std::cout << "MutanStack Copy Constructor called." << std::endl;
	}
	~MutantStack() {
		std::cout << "MutanStack Destructor called." << std::endl;
	}

	MutantStack&	operator=(const MutantStack& src) {
		std::cout << "MutanStack Equal Operator called." << std::endl;

	}

private:
	std::stack	_stack;
};

#endif