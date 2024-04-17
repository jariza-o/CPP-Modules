/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:16:23 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/17 16:54:34 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include "../includes/Data.hpp"

int	main() {
	Data	a;

	a.nb = 10;
	a.str = "HOLAAAAAA";
	
	std::cout << a.nb << "  " << a.str << std::endl;

	uintptr_t b = Serializer::serialize(&a);
	Data*	c = Serializer::deserialize(b);
	
	std::cout << "Memory Address Data a: " << &a << "  nb: " << a.nb << "  str: " << a.str << std::endl;
	std::cout << "Memory Address Data b: " << &c << "  nb: " << c->nb << "  str: " << c->str << std::endl;
	
	// std::cout << b.nb << "  " << b.str << std::endl;
	
}