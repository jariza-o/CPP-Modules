/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:11:21 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/18 15:30:21 by jariza-o         ###   ########.fr       */
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
		Base* basePtr = new A(); // Para crear algo como otra cosa se usa new
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
	} else if (B* b = dynamic_cast<B*>(&p)) { // dynamic_cast permite verificar el tipo real del objeto en tiempo de ejecución cuando existe poliformismo
		std::cout << "& Type: B" << std::endl;
	} else if (C* c = dynamic_cast<C*>(&p)) {
		std::cout << "& Type: C" << std::endl;
	}
}

int	main() {
	Base*	a = generate();

	identify(a);
	identify(*a);

	delete a;
}
