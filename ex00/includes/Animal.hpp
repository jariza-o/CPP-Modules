/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:39:14 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/19 20:37:45 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal {
public:
	Animal( void );
	Animal( std::string type );
	Animal( const Animal& src );
	~Animal();

	virtual void	makeSound();
protected:
	std::string	type;
};

#endif