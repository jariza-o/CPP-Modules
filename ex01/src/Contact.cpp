/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:00:22 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/25 16:42:13 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Contact.hpp"

Contact::Contact( void ) {
	std::cout << "Contact Constructuor " << std::endl;
}

Contact::~Contact( void ) {
	std::cout << "Contact Destructor " << std::endl;
}

void writeInformation(const std::istream& str, int option) {
    std::string input;
    std::getline(str, input);

    if (option == 0)
        this.FirstName = str;
    else if (option == 2)
        contact.LastName = str;
    else if (option == 3)
        contact.NickName = str;
    else if (option == 4)
        contact.Phone = str;
    else if (option == 5)
        contact.darkSecret = str;
}
