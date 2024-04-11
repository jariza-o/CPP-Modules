/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:46:30 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/09 17:49:33 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include <iostream>
#include <stdexcept>

AForm::AForm() : _name("void"), _signGrade(1), _execGrade(1) {
	std::cout << "AForm Void Constructor called." << std::endl;
	this->_sign = false;
}

AForm::AForm(std::string name) : _name(name), _signGrade(1), _execGrade(1) {
	std::cout << "AForm Name Constructor called." << std::endl;
	this->_sign = false;
}

AForm::AForm(int signGrade, int execGrade) : _name("void"), _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << "AForm Grades Constructor called." << std::endl;
	this->_sign = false;
	try {
		if (signGrade < 1)
			throw GradeTooLowException(); // Despues del throw pasa al catch directamente
		else if (signGrade > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the signGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the signGrade Int is incorrect!!!!" << std::endl;
	}
	try {
		if (execGrade < 1)
			throw GradeTooLowException();
		else if (execGrade > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the execGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the execGrade Int is incorrect!!!!" << std::endl;
	}
}

AForm::AForm(std::string name, int signGrade) : _name(name), _signGrade(signGrade), _execGrade(1) {
    std::cout << "AForm Name Grade Constructor called." << std::endl;
	this->_sign = false;
	try {
		if (signGrade < 1)
			throw GradeTooLowException();
		else if (signGrade > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the signGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the signGrade Int is incorrect!!!!" << std::endl;
	}
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
    std::cout << "AForm Name Grades Constructor called." << std::endl;
	this->_sign = false;
	try {
		if (signGrade < 1)
			throw GradeTooLowException();
		else if (signGrade > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the signGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the signGrade Int is incorrect!!!!" << std::endl;
	}
	try {
		if (execGrade < 1)
			throw GradeTooLowException();
		else if (execGrade > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the execGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the execGrade Int is incorrect!!!!" << std::endl;
	}
}

AForm::AForm(const AForm& src) : _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()) {
	std::cout << "AForm Copy Constructor called." << std::endl;
	*this = src;
}

AForm::~AForm() {
	std::cout << "AForm Destructor called." << std::endl;
}

std::string	AForm::getName() const {
	return this->_name;
}

bool	AForm::getSign() const {
	return this->_sign;
}

int	AForm::getSignGrade() const {
	return this->_signGrade;
}
int	AForm::getExecGrade() const {
	return this->_execGrade;
}

AForm&	AForm::operator=(const AForm& src) {
	std::cout << "AForm Equal Operator called." << std::endl;
	if (this->_sign != src.getSign())
		this->_sign = src.getSign();
	try {
		if (src.getSignGrade() < 1)
			throw GradeTooLowException();
		else if (src.getSignGrade() > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the signGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the signGrade Int is incorrect!!!!" << std::endl;
	}
	try {
		if (src.getExecGrade() < 1)
			throw GradeTooLowException();
		else if (src.getExecGrade() > 150)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the execGrade Int is incorrect!!!!" << std::endl;
	}
	catch (const GradeTooHighException& e) {
		std::cout << e.whate() << std::endl;
		std::cout << "You are creating a AForm there the execGrade Int is incorrect!!!!" << std::endl;
	}
	return *this;
}

const char*	AForm::GradeTooHighException::whate() const throw() {
	return "The Grade is the highest.";
}

const char*	AForm::GradeTooLowException::whate() const throw() {
	return "The Grade is the lowest.";
}

bool	AForm::beSigned(const Bureaucrat& src) {
	try {
		if ((this->_signGrade < 1 || this->_signGrade > 150) || (src.getGrade() > this->_signGrade) || this->_sign == true)
			throw std::exception();
		this->_sign = true;
		return true;
	}
	catch (const std::exception& e) {
		std::cout << "The AForm cannot be signed." << std::endl;
		return false;
	}
}

std::ostream&	operator<<(std::ostream& o, const AForm& src) {
	std::string isSigned = "False";

	if (src.getSign())
		isSigned = "True";
	o << src.getName() << ", is signed " << isSigned << ", Sign Grade " << src.getSignGrade() << ", Exec Grade " << src.getExecGrade() << "." << std::endl;
	return o;
}

void	AForm::setSign(bool Sign) {
	this->_sign = Sign;
}

bool	AForm::execute(Bureaucrat const & executor) const {
	try {
		if (!this->_sign)
			throw FormNotSignedException();
		if (this->_execGrade < executor.getGrade())
			throw GradeToHighException();
	}
	catch(const FormNotSignedException& e) {
		std::cout << e.whate() << std::endl;
		return false;
	}
	catch(const GradeToHighException& e) {
		std::cout << e.whate() << std::endl;
		return false;
	}
	return true;
}
const char* AForm::FormNotSignedException::whate() const throw() {
	return "The Form isn't signed.";
}

const char* AForm::GradeToHighException::whate() const throw() {
	return "The Executor grade is low.";
}