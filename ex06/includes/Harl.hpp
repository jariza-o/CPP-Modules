/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:17:59 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/02 10:32:25 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl {
public:
	Harl();
	~Harl();

	void	complain( std::string level );
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif