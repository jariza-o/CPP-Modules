/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:50:06 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/04 17:09:16 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_H
# define SAMPLE_H

class Sample {
public:
	Sample( void );
	~Sample( void );

	void	bar( char const c ) const;
	void	bar( int const n ) const;
	void	bar( float const z ) const;
	void	bar( Sample const & i ) const;

};

#endif