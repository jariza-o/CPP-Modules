/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:44:13 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/16 17:20:36 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main( void ) {
	float	a = 420.042f;				/* Reference value */

	void *	b = &a;						/* Implicit reinterpretation cast */
	void *	c = (void *) &a;			/* Implicit reinterpretation cast */

	void *	d = &a;						/* Implicit promotion -> Ok */
	int *	e = d;						/* Implicit promotion -> hazardeous ! */
	int *	f = (int *) d;				/* Implicit promotion -> Ok, I obey */

	printf( "%p, %f\n", &a, a );

	printf( "%p\n", b );
	printf( "%p\n", c );

	printf( "%p\n", d );
	printf( "%p, %d\n", e, *e );
	printf( "%p, %d\n", f, *f );

	return 0;
}
