/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:47:07 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/21 16:52:29 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

class Sample {
	
public:

	int		publicFoo;

	Sample( void );
	~Sample( void );

	void	publicBar( void ) const;


private:

	int		_privateFoo;
	void	_privateBar( void ) const;
};

#endif
