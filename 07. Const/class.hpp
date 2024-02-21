/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:47:07 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/21 16:51:12 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

class Sample {
	
public:

	float const	pi;
	int			qd;

	Sample( float const f );
	~Sample( void );

	void		bar( void ) const;

};

#endif
