/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:12:39 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/07 19:57:19 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
public:
	Fixed( void );
	Fixed( int const i );
	Fixed( float const i );
	Fixed( Fixed const& src);
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed&	operator=( Fixed const& src );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator>( Fixed const& src ) const;
	bool	operator<( Fixed const& src ) const;
	bool	operator>=( Fixed const& src ) const;
	bool	operator<=( Fixed const& src ) const;
	bool	operator==( Fixed const& src ) const;
	bool	operator!=( Fixed const& src ) const;
	Fixed	operator+( Fixed const& src ) const;
	Fixed	operator-( Fixed const& src ) const;
	Fixed	operator*( Fixed const& src ) const;
	Fixed	operator/( Fixed const& src ) const;
	Fixed&	operator++(); //prefijo
	Fixed&	operator--();
	Fixed	operator++( int ); //postfijo
	Fixed	operator--( int );
	static Fixed&		min( Fixed& n1, Fixed& n2 ); // el static solo se pone aqui, en el .hpp
	static Fixed const&	min( Fixed const& n1, Fixed const& n2 );
	static Fixed&		max( Fixed& n1, Fixed& n2 );
	static Fixed const&	max( Fixed const& n1, Fixed const& n2 );

private:
	int					_fixedPoint;
	static const int	_fractionalBits = 8;
};

	std::ostream&	operator<<(std::ostream& o, Fixed const& src ); // se que debe de ser eso porque me lo dice el compilador, y que tienen que tener más argumentos, pero no se bien porque es asi

#endif
