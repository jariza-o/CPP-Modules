/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:34:59 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/19 20:37:40 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

class Dog : public Animal {
public:
	Dog( void );
	Dog( std::string type ); //Nose si eliminar po como poner para el formato correcto
	Dog( const Dog& src );
	~Dog();
	
	virtual void	makeSound();
};
