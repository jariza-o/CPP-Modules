/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:27:56 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/16 16:35:18 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	dump_32bits_integer(int const n);
void	dump_64bits_double(double const z);

int	main( void ) {
	int	a = 42;
	
	double	b = a;
	double	c = (double) a;

	double	d = a;
	int		e = d;
	int		f = (int) d;

	dump_32bits_integer( a );

	dump_64bits_double( b );
	dump_64bits_double( c );

	dump_64bits_double( d );
	dump_32bits_integer( e );
	dump_32bits_integer( f );


	return 0;
}