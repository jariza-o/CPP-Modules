/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:46:30 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/08 22:15:03 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : _sign(false) {
	std::cout << "Form Void Constructor called." << std::endl;
}

Form::Form(std::string name) {
	std::cout << "Form Name Constructor called." << std::endl;
	this->_sign = false;
	this->_name = name;
}

Form::Form(int signGrade, int execGrade) {
	std::cout << "Form Grades Constructor called." << std::endl;
	this->_sign = false;
	this->_signGrade = signGrade;
	this->_execGrade = execnGrade;
}

Form::Form(std::string name, int signGrade) {
    std::cout << "Form Name Grade Constructor called." << std::endl;
	this->_sign = false;
	this->_name = name;
	this->_signGrade = signGrade;
}

Form(std::string name, int signGrade, int execGrade) {
    std::cout << "Form Name Grades Constructor called." << std::endl;
	this->_sign = false;
	this->_name = name;
	this->_signGrade = signGrade;
	this->_execGrade = execnGrade;
}

Form::Form(const Form& src) {
	std::cout << "Form Copy Constructor called." << std::endl;
	*this = src;
}

Form::~Form() {
	std::cout << "Form Destructor called." << std::endl;
}

Form&	Form::operator=(const Form& src) {
	
}

const char*	Form::GradeTooHighException::whate() const throw() {
	return "The Grade is the highest.";
}

const char*	Form::GradeTooLowException::whate() const throw() {
	return "The Grade is the lowest.";
}

void	Form::beSigned(const Bureaucrat& src) {
	
}

std::ostream&	operator<<( std::ostream& o, const Form& src ) {
	
}
