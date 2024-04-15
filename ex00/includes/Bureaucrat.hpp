/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:44:36 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/02 17:58:12 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>

class Bureaucrat {
public:
	Bureaucrat( void );
	Bureaucrat( std::string name );
	Bureaucrat( int grade );
	Bureaucrat( std::string name, int grade );
	Bureaucrat(const Bureaucrat& src);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();

	Bureaucrat&	operator=(const Bureaucrat& src);

	class GradeTooHighException : public std::exception {
		public:
            virtual const char* whate() const throw(); // Funcion que pertenece a exception, y que declara la excepcion con el throw() 

	};
	class GradeTooLowException : public std::exception {
		public:
            virtual const char* whate() const throw();
	};

private:
	const std::string	_name;
	int					_grade;
};

std::ostream&	operator<<( std::ostream& o, const Bureaucrat& src );

#endif
