/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:32:28 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/31 20:42:11 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("void"), _grade(1) { // Y SI NO HAY QUE ASIGNARLE NADA EN VOID
	std::cout << "Bureaucrat Void Constructor called." << std::endl;
}

Bureaucrat::Bureaucrat( std::string name ) : _name(name), _grade(1) {
	std::cout << "Bureaucrat Name Constructor called." << std::endl;
}
Bureaucrat::Bureaucrat( int grade ) : _name("void") {
	std::cout << "Bureaucrat Grade Constructor called." << std::endl;
	if (grade < 1 || grade > 150) { // AQUI TENGO QUE USAR EXCEPCIONES TRY CATH
		this->_grade = 1;
		std::cout << "The Grade Int is incorrect." << std::endl;
	}
	else
		this->_grade = grade;
}
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Bureaucrat Name and Grade Constructor called." << std::endl;
	if (grade < 1 || grade > 150) { // AQUI TENGO QUE USAR EXCEPCIONES TRY CATH
		this->_grade = 1;
		std::cout << "The Grade Int is incorrect." << std::endl;
	}
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Destructor called." << std::endl;
}

std::string	Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

// COMO 1 es es mas alto y 150 el mas bajo la incrementación y decrementación está mal

void	Bureaucrat::incrementGrade( int i ) {
	if ((this->_grade + i) > 0 && (this->_grade + i) < 151)  // AQUI TENGO QUE USAR EXCEPCIONES TRY CATH
		this->_grade += i;
	else
		std::cout << "The Grade Sum is incorrect." << std::endl;
}
void	Bureaucrat::decrementGrade( int i ) {
	if ((this->_grade - i) > 0 && (this->_grade - i) < 151) // AQUI TENGO QUE USAR EXCEPCIONES TRY CATH
		this->_grade -= i;
	else
		std::cout << "The Grade Subtract is incorrect." << std::endl;
}