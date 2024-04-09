/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:46:30 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/09 17:38:13 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include <iostream>
#include <stdexcept>

Form::Form() : _name("void"), _signGrade(1), _execGrade(1) {
	std::cout << "Form Void Constructor called." << std::endl;
	this->_sign = false;
}

Form::Form(std::string name) : _name(name), _signGrade(1), _execGrade(1) {
	std::cout << "Form Name Constructor called." << std::endl;
	this->_sign = false;
}

Form::Form(int signGrade, int execGrade) : _name("void"), _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << "Form Grades Constructor called." << std::endl;
	this->_sign = false;
	try {
		if (signGrade < 1)
			throw GradeTooLowException(); // Despues del throw pasa al catch directamente
		else if (signGrade > 150)
			throw GradeTooHighException(); // Despues del throw pasa al catch directamente
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the signGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the signGrade Int is incorrect!!!!" << std::endl;
	}
	try {
		if (execGrade < 1)
			throw GradeTooLowException(); // Despues del throw pasa al catch directamente
		else if (execGrade > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the execGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the execGrade Int is incorrect!!!!" << std::endl;
	}
}

Form::Form(std::string name, int signGrade) : _name(name), _signGrade(signGrade), _execGrade(1) {
    std::cout << "Form Name Grade Constructor called." << std::endl;
	this->_sign = false;
	try {
		if (signGrade < 1)
			throw GradeTooLowException(); // Despues del throw pasa al catch directamente
		else if (signGrade > 150)
			throw GradeTooHighException(); // Despues del throw pasa al catch directamente
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the signGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the signGrade Int is incorrect!!!!" << std::endl;
	}
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
    std::cout << "Form Name Grades Constructor called." << std::endl;
	this->_sign = false;
	try {
		if (signGrade < 1)
			throw GradeTooLowException(); // Despues del throw pasa al catch directamente
		else if (signGrade > 150)
			throw GradeTooHighException(); // Despues del throw pasa al catch directamente
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the signGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the signGrade Int is incorrect!!!!" << std::endl;
	}
	try {
		if (execGrade < 1)
			throw GradeTooLowException(); // Despues del throw pasa al catch directamente
		else if (execGrade > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the execGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the execGrade Int is incorrect!!!!" << std::endl;
	}
}

Form::Form(const Form& src) : _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()) {
	std::cout << "Form Copy Constructor called." << std::endl;
	*this = src;
}

Form::~Form() {
	std::cout << "Form Destructor called." << std::endl;
}

std::string	Form::getName() const {
	return this->_name;
}

bool	Form::getSign() const {
	return this->_sign;
}

int	Form::getSignGrade() const {
	return this->_signGrade;
}
int	Form::getExecGrade() const {
	return this->_execGrade;
}

Form&	Form::operator=(const Form& src) {
	std::cout << "Form Equal Operator called." << std::endl;
	if (this->_sign != src.getSign())
		this->_sign = src.getSign();
	try {
		if (src.getSignGrade() < 1)
			throw GradeTooLowException(); // Despues del throw pasa al catch directamente
		else if (src.getSignGrade() > 150)
			throw GradeTooHighException(); // Despues del throw pasa al catch directamente
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the signGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the signGrade Int is incorrect!!!!" << std::endl;
	}
	try {
		if (src.getExecGrade() < 1)
			throw GradeTooLowException(); // Despues del throw pasa al catch directamente
		else if (src.getExecGrade() > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the execGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a Form there the execGrade Int is incorrect!!!!" << std::endl;
	}
	return *this;
}

const char*	Form::GradeTooHighException::whate() const throw() {
	return "The Grade is the highest.";
}

const char*	Form::GradeTooLowException::whate() const throw() {
	return "The Grade is the lowest.";
}

bool	Form::beSigned(const Bureaucrat& src) {
	try {
		if ((this->_signGrade < 1 || this->_signGrade > 150) || (src.getGrade() > this->_signGrade) || this->_sign == true)
			throw std::exception();
		this->_sign = true;
		return true;
	}
	catch (const std::exception& e) {
		std::cout << "The form cannot be signed." << std::endl;
		return false;
	}
}

std::ostream&	operator<<(std::ostream& o, const Form& src) {
	std::string isSigned = "False";

	if (src.getSign())
		isSigned = "True";
	o << src.getName() << ", is signed " << isSigned << ", Sign Grade " << src.getSignGrade() << ", Exec Grade " << src.getExecGrade() << "." << std::endl;
	return o;
}
