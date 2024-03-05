/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:11:09 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/05 19:19:15 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_H
# define SAMPLE_H

# include <iostream>

class Sample {
public:
	Sample( void );
	Sample( int const n );
	Sample( Sample const & src );
	~Sample( void );

	Sample &	operator=( Sample const & rhs );

	int	getFoo( void ) const;
private:
	int	_foo;
};

std::ostream &	operator<<( std::ostream & o, Sample const & i );

#endif
