/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:32:28 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/12 08:56:39 by jariza-o         ###   ########.fr       */
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
	try {
		if (grade < 1 || grade > 150)
			throw std::exception(); // Despues del throw pasa al catch directamente
		this->_grade = grade;
	}
	catch (const std::exception& e) {
		this->_grade = 1;
		std::cout << "The Grade Int is incorrect." << std::endl;
	}
	return ;
}
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Bureaucrat Name and Grade Constructor called." << std::endl;
	try {
		if (grade < 1 || grade > 150)
			throw std::exception(); // Despues del throw pasa al catch directamente
		this->_grade = grade;
	}
	catch (const std::exception& e) {
		this->_grade = 1;
		std::cout << "The Grade Int is incorrect." << std::endl;
	}
	return ;
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

void	Bureaucrat::incrementGrade() {
	try {
		if ((this->_grade - 1) < 1)
			throw GradeTooHighException();
		this->_grade -= 1;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
	}
	return ;
}
void	Bureaucrat::decrementGrade() {
	
	try {
		if ((this->_grade + 1) > 150)
			throw GradeTooLowException();
		this->_grade += 1;
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
	}
	return ;
}

const char*	Bureaucrat::GradeTooHighException::whate() const throw() {
	return "The Grade is the highest.";
}

const char*	Bureaucrat::GradeTooLowException::whate() const throw() {
	return "The Grade is the lowest.";
}


std::ostream&	operator<<( std::ostream& o, const Bureaucrat& src ) {
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return o;
}

void	Bureaucrat::signForm(AForm& src) const {
	if (this->_grade < src.getSignGrade())
		std::cout << this->_name << " couldn’t sign " << src.getName() << " because Bureaucrat Grade is more lower that Form SignGrade." << std::endl;
	else if (src.beSigned(*this)){
		src.setSign(true);
		std::cout << this->_name << " signed " << src.getName() << "." << std::endl;
	}
	else
		std::cout << this->_name << " couldn’t sign " << src.getName() << " because the form is incorrect." << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form) {
	if (form.execute(*this)) {
		form.action();
		std::cout << this->_name << " executed " << form.getName() << "." << std::endl;
	}	
}