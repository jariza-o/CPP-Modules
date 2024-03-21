/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:39:14 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/21 18:34:16 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

/* Se crean los constructores como protected, para que así solo se pueda acceder desde las clases heredaras.
Es otra técnica común para convertir una clase en abstracta */

class Animal {
public:
	virtual ~Animal();

	virtual void	makeSound() const = 0; // Esto es para pasar la clase a abstracta = 0

	Animal&			operator=( const Animal& src );
	std::string		getType() const;
protected:
	Animal( void );
	Animal( const Animal& src );
	std::string	type;
};

#endif
