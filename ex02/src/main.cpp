/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:11:21 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/17 18:52:09 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

Base* generate(void) {
	// int	i = generateRandom();
	
	srand(time(NULL));
	int i = rand() % 3;

	if (i == 1){
		std::cout << "Type A Generated." << std::endl;
		Base* basePtr = new A();
		return basePtr;
	}
	else if (i == 2) {
		std::cout << "Type B Generated." << std::endl;
		Base* basePtr = new B();
		return basePtr;
	}
	else {
		std::cout << "Type C Generated." << std::endl;
		Base* basePtr = new C();
		return basePtr;
	}
}

void identify(Base* p) {
	if (A* a = dynamic_cast<A*>(p)) {
		std::cout << "Type: A" << std::endl;
	} else if (B* b = dynamic_cast<B*>(p)) {
		std::cout << "Type: B" << std::endl;
	} else if (C* c = dynamic_cast<C*>(p)) {
		std::cout << "Type: C" << std::endl;
	}
}

void identify(Base& p) {
	if (A* a = dynamic_cast<A*>(&p)) {
		std::cout << "& Type: A" << std::endl;
	} else if (B* b = dynamic_cast<B*>(&p)) {
		std::cout << "& Type: B" << std::endl;
	} else if (C* c = dynamic_cast<C*>(&p)) {
		std::cout << "& Type: C" << std::endl;
	}
}

int	main() {
	Base*	a = generate();

	identify(a);
	identify(*a);
}
