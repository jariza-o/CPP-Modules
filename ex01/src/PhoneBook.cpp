/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:03:38 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/25 16:38:32 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << "PhoneBook Constructuor " << std::endl;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "PhoneBook Destructor " << std::endl;
}

void	PhoneBook::Add( void ) {
	std::cout << "Enter the First Name : ";
	Contacts->writeInformation(std::cin, 0);
	std::cout << "Enter the Last Name : ";

	std::cout << "Enter the NickName : ";

	std::cout << "Enter the Phone Number : ";
	
	std::cout << "Enter a Dark Secret : ";
}
