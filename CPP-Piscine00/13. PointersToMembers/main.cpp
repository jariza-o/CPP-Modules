/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:59:42 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/22 18:48:39 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"


int	main() {

	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)( void ) const;

	p = &Sample::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;


	f = &Sample::bar;
	(instance.*f)();
	(instancep->*f)();

	return 0;
}
