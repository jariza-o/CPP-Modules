/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:47:07 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/21 19:27:59 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

class Sample {
	
public:

	Sample( void );
	~Sample( void );


	int		getFoo( void ) const;
	void	setFoo( int v );


private:

	int		_foo;
};

#endif
