/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:17:50 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/21 18:35:51 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "./ICharacter.hpp"

class AMateria {
protected:
	AMateria( void );
	AMateria( const AMateria& src );

	std::string	type;

public:
	AMateria( std::string const & type );
	~AMateria();
	
	std::string const & getType() const; //Returns the materia type
	
	virtual AMateria* clone() const = 0; // el = 0 indica de que la funcion es abstracta, y es para herencia no se hace
	virtual void use( ICharacter& target ) = 0;

	AMateria&	operator=(const AMateria& src );
};

#endif