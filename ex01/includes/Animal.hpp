/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:39:14 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:21:19 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>


/* Destructor: Este es virtual para que si al declarar un hijo lo haces de la siguiente manera:
	const Animal*	meta = new Animal(); 
Salgan  los dos destructores (Destrucción Poliformica) */
class Animal {
public:
	Animal( void );
	Animal( const Animal& src );
	virtual ~Animal(); // Virtual para las clases Herederas (Explicacion arriba)

	virtual void	makeSound() const;

	Animal&			operator=( const Animal& src );
	std::string		getType() const;
protected:
	std::string	type;
};

#endif
