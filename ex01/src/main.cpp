/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:45:35 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/25 20:20:12 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	main ( void )
{
	PhoneBook	PhoneBook;
	std::string	option;

	std::cout << "Welcome to the jariza-o PhoneBook!!!" << std::endl;
	while (1) {
		std::cout << "Choose a option (ADD, SEARCH; EXIT): ";
		std::cin >> option;
		if (option == "ADD")
			PhoneBook.Add();
		else if (option == "SEARCH")
			PhoneBook.Search();
		else if (option == "EXIT"){
			break;
		}
		else
			std::cout << "HA PULSAO MAAL " << std::endl;
	}


	return 0;
}