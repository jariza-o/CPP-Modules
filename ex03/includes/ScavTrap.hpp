/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:21:07 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/14 21:03:54 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap( void );
	ScavTrap( std::string Name );
	ScavTrap( const ScavTrap& src );
	~ScavTrap( void );

	void	guardGate();

	ScavTrap&	operator=(ScavTrap const& src);
};

#endif