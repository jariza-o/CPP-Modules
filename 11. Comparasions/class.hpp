/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:47:07 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/21 20:39:54 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

class Sample {
	
public:

	Sample( int v );
	~Sample( void );


	int		getFoo( void ) const;
	int	compare( Sample *other ) const;


private:

	int		_foo;
};

#endif
