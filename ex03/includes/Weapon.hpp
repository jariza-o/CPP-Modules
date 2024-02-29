/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:33:07 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/29 22:14:05 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
public:
	Weapon();
	Weapon( std::string type );
	~Weapon();

	const std::string&	getType( void ) const;
	void				setType( std::string type );
private:
	std::string	_type;

};

#endif