/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:44:46 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/29 22:53:10 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class	HumanA {
public:
	HumanA( std::string Name, Weapon& Weapon );
	~HumanA();
	void	attack( void ) const;
private:
	std::string	_Name;
	Weapon*		_Weapom;
};

#endif