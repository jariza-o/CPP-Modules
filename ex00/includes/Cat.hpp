/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:34:55 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/19 20:37:53 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

class Cat : public Animal {
public:
	Cat( void );
	Cat( std::string type ); //No se si eliminar
	Cat( const Cat& src );
	~Cat();

	virtual void	makeSound();
};