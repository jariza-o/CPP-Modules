/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:12:39 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/06 08:06:19 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
public:
	Fixed( void );
	Fixed( Fixed const& src);
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed& operator=( Fixed const& src );
private:
	int					_fixedPoint;
	static const int	_fractionalBits = 8;		
};

#endif