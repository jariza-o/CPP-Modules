/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:33:33 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:54:42 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {
public:
	Brain( void );
	Brain( const Brain& src );
	~Brain();

	std::string	getIdea( int num ) const;
	void		setIdea( int num, std::string str );

private:
	std::string _ideas[100];
};

#endif