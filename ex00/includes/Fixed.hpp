/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:12:39 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/05 20:17:35 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
public:
	Fixed( void );
	Fixed( int const n ); //no se si este es el copia
	Fixed( Fixed const& src);
	~Fixed();

	int		getRamBits ( void ) const;
	void	setRawBits( int const raw );
private:
	int	_fixedPoint;
	const int _fractionalBits = 8;		
};


#endif