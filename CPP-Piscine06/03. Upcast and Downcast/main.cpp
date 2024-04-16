/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:24:41 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/16 17:30:23 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Paent					{};
class Child1: public Parent {};
class Child2: public Parent {};



int	main( void ){
	Child1	a;

	Parent *	b = &a;
	Parent *	c = (Parent *) &a;

	Parent *	d = &a;
	Parent *	e = d;
	Parent *	f = (Child2 *) d;

	return 0;
}