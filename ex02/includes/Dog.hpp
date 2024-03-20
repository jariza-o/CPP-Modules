/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:34:59 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 19:07:30 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal {
public:
	Dog( void );
	Dog( const Dog& src );
	~Dog();
	
	virtual void	makeSound() const;

	Dog&			operator=( const Dog& src );

	std::string	getBrainIdea( int num );
	void		setBrainIdea( int num, std::string str );

private:
	Brain*	_Brain;
};

#endif
