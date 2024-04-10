/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:40:34 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/10 21:45:42 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm Void Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& Target) : AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm Target Constructor called." << std::endl;
	this->_target = Target; // target es lo mismo que name en el AForm?? Para añadirlo
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm Copy Constructor called." << std::endl;
	if (this != &src)
		this->_target = src._target; //NO SE SI SE PODRA PORQUE _TARGET ES PRIVATE
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm Destructor called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src) {
	
}

void	RobotomyRequestForm::action() const {
	std::cout << "Drilling Noises (guarrito a la hora la siesta): guuuuuooooooooooooooonguuuuuooooooooooooooonguuuuuooooooooooooooon" << std::endl;
	//COMO SE HACE LO DEL 50%
}