/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:12:01 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/16 17:21:22 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main( void ) {
	int			a = 2;						/* Reference value */

	int	const *	b = &a;						/* Implicit type qualifier cast */
	int const *	c = (int const *) &a;		/* Explicit type qualifier cast */

	int const *	d = &a;						/* Implicit promotion -> OK */
	int *		e = d;						/* Implicit demotion -> Hell no ! */
	int *		f = (int *) d;				/* Explicit demotion -> OK, I obey */
}
