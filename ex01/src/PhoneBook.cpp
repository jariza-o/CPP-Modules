/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:03:38 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/26 15:32:09 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	// std::cout << "PhoneBook Constructuor " << std::endl;
	this->OldContact = 0;
}

PhoneBook::~PhoneBook( void ) {
	// std::cout << "PhoneBook Destructor " << std::endl;
}

void	PhoneBook::Add( void ) {
	if (this->OldContact == 8)
		this->OldContact = 0;
	this->Contacts[this->OldContact].CreateContact();
	this->OldContact++;
}

void	PhoneBook::Search( void ) {
	int			i = 0;
	std::string	index;
	
	std::cout << "Contact List:" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	while (i < 8){
		std::cout << "|" << i << "         |";
		this->Contacts[i].getInformation();
		std::cout << "_____________________________________________" << std::endl;
		i++;
	}
	std::cout << "Select a INDEX: ";
	std::cin >> index;
	i = atoi(index.c_str());
	if ((i == 0 && index == "0") || (i >= 1 && i <= 7))
		this->Contacts[i].getDarkSecret();
	else
		std::cout << "The INDEX number is incorrect." << std::endl;
}
