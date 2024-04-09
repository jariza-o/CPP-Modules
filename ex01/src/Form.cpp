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

Form::Form() {
	std::cout << "Form Void Constructor called." << std::endl;
	this->_sign = false;
}

Form::Form(std::string name) : _name(name) {
	std::cout << "Form Name Constructor called." << std::endl;
	this->_sign = false;
}

Form::Form(int signGrade, int execGrade) : _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << "Form Grades Constructor called." << std::endl;
	this->_sign = false;
}

Form::Form(std::string name, int signGrade) : _name(name), _signGrade(signGrade) {
    std::cout << "Form Name Grade Constructor called." << std::endl;
	this->_sign = false;
}

Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
    std::cout << "Form Name Grades Constructor called." << std::endl;
	this->_sign = false;
}

Form::Form(const Form& src) {
	std::cout << "Form Copy Constructor called." << std::endl;
	*this = src;
}

Form::~Form() {
	std::cout << "Form Destructor called." << std::endl;
}

std::string	getName() const {
	return this->_name;
}

bool	getSign() const {
	return this->_sign;
}

int	getSignGrade() const {
	return this->_signGrade;
}
int	getExecGrade() const {
	return this->_execGrade;
}

Form&	Form::operator=(const Form& src) {
	std::cout << "Form Equal Operator called." << std::endl;
	if (this->_name != src.getName())
		this->_name == src.getName();
	if (this->_sign != src.getSign())
		this->_sign = src.getSign();
	if (this->_signGrade != src.getSignGrade())
		this->_signGrade = src.getSignGrade();
	if (this->_execGrade != src.getExecGrade())
		this->_execGrade = src.getExecGrade();
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
