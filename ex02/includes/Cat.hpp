/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:34:55 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 19:00:07 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal {
public:
	Cat( void );
	Cat( const Cat& src );
	~Cat();

	virtual void	makeSound() const;
	
	Cat&			operator=( const Cat& src );

	std::string	getBrainIdea( int num );
	void		setBrainIdea( int num, std::string str );

private:
	Brain*	_Brain;
};

#endif
