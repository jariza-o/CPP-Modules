/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:53:39 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/25 17:40:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

void	setNumbers(int* n) {
	srand(time(NULL));
	for (int i = 0; i < 10000; ++i)
		n[i] = std::rand() % 10000;  // Genera números entre 0 y 9999
		// n[i] = std::rand();
}

int	main() {
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(112); // ESTE NO PUEDE AÑADIRLO

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

/* 10000 TEST */
	Span	sp2(10000);
	int	n[10000];

	setNumbers(n);
	for (int i = 0; i < 10000; ++i)
		sp2.addNumber(n[i]);

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	return 0;
}
