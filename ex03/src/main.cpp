/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 07:25:33 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/10 12:08:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int	main( void ) {
	Point	a;
	Point	b(4, 0);
	Point	c(Point(2,3));
	Point	point(2, 1);

	if (!bsp(a, b, c, point)) {
		std::cout << "El punto no está dentro del triángulo." << std::endl;
	}
}
