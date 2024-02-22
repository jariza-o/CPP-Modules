/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:59:42 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/22 15:59:42 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

void	f0( void ) {
	
	Sample	instance;
	
	std::cout << "f0: Number of instances : " << Sample::getNbInst() << std::endl;

	return;
}

void	f1( void ) {
	
	Sample	instance;
	
	std::cout << "f1: Number of instances : " << Sample::getNbInst() << std::endl;
	f0();

	return;
}

int	main() {

	std::cout << "main1: Number of instances : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "main2: Number of instances : " << Sample::getNbInst() << std::endl;

	return 0;
}
