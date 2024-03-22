/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:18:57 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/21 16:23:54 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include <iostream>
#include "./AMateria.hpp"

class Ice : public AMateria {
public:
	Ice( void );
	Ice( const Ice& src );
	~Ice();

	Ice*	clone() const;
	void use( ICharacter& target );
	

	Ice&	operator=(const Ice& src);
};

#endif