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
	if (grade < 1 || grade > 150) {
		this->_grade = 1;
		std::cout << "The Grade Int is incorrect." << std::endl;
	}
	else
		this->_grade = grade;
}
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Bureaucrat Name and Grade Constructor called." << std::endl;
	if (grade < 1 || grade > 150) {
		this->_grade = 1;
		std::cout << "The Grade Int is incorrect." << std::endl;
	}
	else
		this->_grade = grade;
}