/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:55:33 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 17:57:09 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat( void );
	WrongCat( const WrongCat& src );
	~WrongCat();

	virtual void	makeSound() const;
	
	WrongCat&			operator=( const WrongCat& src );
};

#endif
