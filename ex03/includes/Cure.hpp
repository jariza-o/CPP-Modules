/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:10:51 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/24 11:17:40 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include <iostream>
#include "./AMateria.hpp"

class Cure : public AMateria {
public:
	Cure( void );
	Cure( const Cure& src );
	~Cure();

	Cure*	clone() const;
	void use( ICharacter& target );
	

	Cure&	operator=(const Cure& src);
};

#endif