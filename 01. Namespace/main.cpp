/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:33:08 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/19 19:30:55 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;
int	f( void ){ return 2; }


namespace	Foo {
	
	int		gl_var = 3;
	int		f( void ) { return 4; }
}


namespace	Bar {
	
	int		gl_var = 5;
	int		f( void ) {return 6; }
}


namespace Muf = Bar;


int		main( void ) {
	
	printf( "gl_var:	[%d]\n", gl_var );
	printf( "f():	%d]\n\n", f() );

	printf( "Foo::gl_var:	[%d]\n", Foo::gl_var );
	printf( "Foo::f():	[%d]\n\n", Foo::f() );

	printf( "Bar::gl_var:	[%d]\n", Bar::gl_var );
	printf( "Bar::f():	[%d]\n\n", Bar::f() );

	printf( "Muf::gl_var:	[%d]\n", Muf::gl_var );
	printf( "Muf::gl_var:	[%d]\n\n", Muf::f() );

	printf( "::gl_var:	[%d]\n", ::gl_var );
	printf( "::gl_var:	[%d]\n", ::f() );

}
