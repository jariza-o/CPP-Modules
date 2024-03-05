/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:18:53 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/05 18:28:27 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

# include <iostream>

class Integer {
public:
	Integer( int const n );
	~Integer( void );

	int	getValue ( void ) const;

	Integer &	operator=( Integer const & rhs );
	Integer		operator+( Integer const & rhs ) const;


private:
	int	_n;
};

std::ostream &  operator<<( std::ostream & o, Integer const & rhs );

#endif
