/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:00:22 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/25 20:32:12 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact( void ) {
	// std::cout << "Contact Constructuor " << std::endl;
}

Contact::~Contact( void ) {
	// std::cout << "Contact Destructor " << std::endl;
}

// std::string read() {
// 	std::string input;
// 	std::getline(std::cin, input);
// 	return input;
// }

void	Contact::CreateContact( void ) {
	std::cout << "Enter the First Name: ";
	std::cin >> this->FirstName;
	std::cout << "Enter the Last Name: ";
	std::cin >> this->LastName;
	std::cout << "Enter the NickName: ";
	std::cin >> this->NickName;
	std::cout << "Enter the Phone Number: ";
	std::cin >> this->Phone;
	std::cout << "Enter a Dark Secret: ";
	std::cin >> this->DarkSecret;
}

void	Contact::getInformation( void ) {
	int	len;

	std::cout << this->FirstName.substr(0, 10);
	if (this->FirstName.size() < 10) {
		len = this->FirstName.size();
		while (len < 10){
			std::cout << " ";
			len++;
		}
	}
	std::cout << "|" << this->LastName.substr(0, 10);
	if (this->LastName.size() < 10) {
		len = this->LastName.size();
		while (len < 10){
			std::cout << " ";
			len++;
		}
	}
	std::cout << "|" << this->NickName.substr(0, 10);
	if (this->NickName.size() < 10) {
		len = this->NickName.size();
		while (len < 10){
			std::cout << " ";
			len++;
		}
	}
	std::cout << "|" << std::endl;
}

void	Contact::getDarkSecret( void ) {
	std::cout << "- First Name: " << this->FirstName << std::endl;
	std::cout << "- Last Name: " << this->LastName << std::endl;
	std::cout << "- NickName: " << this->NickName << std::endl;
	std::cout << "- DarkSecret: " << this->DarkSecret << std::endl;
}
