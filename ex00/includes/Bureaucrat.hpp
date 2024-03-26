/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:44:36 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/26 12:44:36 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat { // TIENE QUE TENER FORMATO CANCNICO ESTA???
public:
	Bureaucrat( void );
	Bureaucrat( std::string name );
	Bureaucrat( int grade );
	Bureaucrat( std::string name, int grade );
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade( int i );
	void		decrementGrade( int i );

	std::ostream&	operator<<( std::ostream& o, const Bureaucrat& src );

private:
	const std::string	_name;
	int					_grade;
};

#endif