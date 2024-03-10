/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:58:11 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/10 12:10:14 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Fixed abs( Fixed const& nb )
{
    if (nb < 0)
        return  nb * -1;
    return nb;
}

Fixed Area(Point const& a, Point const& b, Point const& c) {
	Fixed area = abs(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()));

	return area / 2;
}

/* Esta funcíon va a calcular si point es un punto de dentro del area del triangulo.
Esto lo hace cualculando primero el area total del triangulo con las 3 vértices.
Despues, calcula las 3 areas posibles con point (una sin a, otra sin b y otra sin c).
La sumas de estas 3 areas debe ser igual al area total del triangulo, si point está dentro
del area del triangulo. */

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	areaTotal = Area(a, b, c);
	Fixed	pA = Area(point, b, c);
	Fixed	pB = Area(a, point, c);
	Fixed	pC = Area(a, b, point);

	return (areaTotal == (pA + pB + pC));
}