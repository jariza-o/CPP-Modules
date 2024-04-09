/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:46:03 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/09 17:07:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "./Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form {
public:
	Form();
	Form(std::string name);
	Form(int signGrade, int execGrade);
	Form(std::string name, int signGrade);
	Form(std::string name, int signGrade, int execGrade); // NOSE SI LOS GETTERS ESTAN GUAYS YA QUE NO SE SI LOS GRADE SON ESOS
	Form(const Form& src);
	~Form();

	Form&	operator=(const Form& src);
	
	std::string	getName() const; // Realmente no tienen que ser const porque al ser ya const no se pueden modificar
	bool		getSign() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	class GradeTooHighException : public std::exception {
		public:
            virtual const char* whate() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
            virtual const char* whate() const throw();
	};

	bool	beSigned(const Bureaucrat& src);

private:
	const std::string	_name;
	bool				_sign;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream&	operator<<(std::ostream& o, const Form& src);

#endif