/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:47:06 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/10 21:49:21 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm Void Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& Target) : AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm Target Constructor called." << std::endl;
	this->_target = Target; // target es lo mismo que name en el AForm?? Para añadirlo
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm Copy Constructor called." << std::endl;
	if (this != &src)
		this->_target = src._target; //NO SE SI SE PODRA PORQUE _TARGET ES PRIVATE
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm Destructor called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src) {
	
}

void	PresidentialPardonForm::action() const {
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}