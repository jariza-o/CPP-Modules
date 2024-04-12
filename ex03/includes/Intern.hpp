/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:28:31 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/12 13:36:48 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include "./AForm.hpp"
#include <iostream>
#include <stdexcept>

class Intern {
public:
	Intern();
	Intern(const Intern& src);
	~Intern();

	Intern&	operator=(const Intern& src);

	AForm*	makeForm(std::string formName, std::string formTarget);

	class RobotomyException : public std::exception {
		public:
            virtual const char* whate() const throw(); // Funcion que pertenece a exception, y que declara la excepcion con el throw()
	};
	class ShurubberyException : public std::exception {
		public:
            virtual const char* whate() const throw(); // Funcion que pertenece a exception, y que declara la excepcion con el throw()
	};
	class PresidentialException : public std::exception {
		public:
            virtual const char* whate() const throw(); // Funcion que pertenece a exception, y que declara la excepcion con el throw()
	};
private:
	AForm* _form;
};

#endif
