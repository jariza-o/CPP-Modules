/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:39:53 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/28 09:57:00 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
public:
	Zombie( void );
	Zombie( std::string Name );
	~Zombie();

	void	announce( void );
	void	setName( std::string Name );

private:
	std::string _Name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif