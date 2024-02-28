/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:39:53 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/28 08:49:20 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
public:
	Zombie( std::string Name );
	~Zombie();

	void	announce( void );

private:
	std::string _Name;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif