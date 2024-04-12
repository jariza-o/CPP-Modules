/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:28:51 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/12 09:28:51 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern() {
	std::cout << "Intern Void Constructor called." << std::endl;
}

Intern::Intern(const Intern& src) {
	std::cout << "Intern Copy Constructor called." << std::endl;
	// if (this != &src){}
		// AQUI QUE COPIO SI NO HAY NA QUE COPIAR
}

Intern::~Intern() {

}

Intern&	Intern::operator=(const Intern& src) {
	std::cout << "Intern Equal Operator called." << std::endl;
	// if (this != &src){}
		// AQUI QUE COPIO SI NO HAY NA QUE COPIAR
	return *this;
}

AForm*	Intern::makeForm(std::string formName, std::string formTarget) {
	try {
		if (formName == "robotomy request")
			throw RobotomyException();
		else if (formName == "shurubbery request")
			throw ShurubberyException();
		else if (formName == "presidential request")
			throw PresidentialException();
		else
			std::cout << "The formName is incorrect!!" << std::endl;
		return NULL;

	}
	catch (const RobotomyException& e){
		AForm*	form = new RobotomyRequestForm(formTarget);
		e.whate();
	}
	catch (const ShurubberyException& e){
		AForm*	form = new ShrubberyCreationForm(formTarget);
		e.whate();
	}
	catch (const PresidentialException& e){
		AForm*	form = new PresidentialPardonForm(formTarget);
		e.whate();
	}
}

const char* Intern::RobotomyException::whate() const throw() {
	return "Intern creates RobotomyRequestForm";
}
const char* Intern::ShurubberyException::whate() const throw() {
	return "Intern creates ShrubberyCreationForm";
}
const char* Intern::PresidentialException::whate() const throw() {
	return "Intern creates PresidentialPardonForm";
}
