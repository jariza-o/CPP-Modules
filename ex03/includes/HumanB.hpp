/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:47:57 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/29 22:53:04 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class	HumanB {
public:
	HumanB( std::string Name );
	HumanB( std::string Name, Weapon& Weapon );
	~HumanB();

	void	setWeapon( Weapon& Weapon );
	void	attack( void ) const;
private:
	std::string	_Name;
	Weapon*		_Weapom;
};

#endif