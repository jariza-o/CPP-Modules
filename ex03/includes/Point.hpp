/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 08:48:21 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/10 11:42:32 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include <iostream>
#include "./Fixed.hpp"

class Point {
public:
	Point( void );
	Point( float const x, float const y );
	Point( Point const& src );
	~Point();

	Point&	operator=( Point const& src );
	Fixed	getX( void ) const;
	Fixed	getY( void ) const;

private:
	Fixed const	_x;
	Fixed const	_y;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point); // detecta si point es un punto de dentro del triángulo

#endif
