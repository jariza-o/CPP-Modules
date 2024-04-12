/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:46:03 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/12 13:38:24 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_H
# define AForm_H

#include "./Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class AForm {
public:
	AForm();
	AForm(std::string name);
	AForm(int signGrade, int execGrade);
	AForm(std::string name, int signGrade);
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm& src);
	virtual ~AForm(); // es virtual porque como se pasa por puntero en Intern, tiene que ser asi para el delete

	AForm&	operator=(const AForm& src);
	
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

	virtual void	action() const = 0;
	bool			execute(Bureaucrat const & executor) const;

	void	setSign(bool Sign);

	class FormNotSignedException : public std::exception {
		public:
            virtual const char* whate() const throw();
	};
	class GradeToHighException : public std::exception {
		public:
            virtual const char* whate() const throw();
	};

private:
	const std::string	_name;
	bool				_sign;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream&	operator<<(std::ostream& o, const AForm& src);

#endif