/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:50:13 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/14 21:03:47 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string _Name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:
	DiamondTrap( void );
	DiamondTrap( std::string Name );
	DiamondTrap( const DiamondTrap& src );
	~DiamondTrap( void );

	using	ScavTrap::attack;

	void	whoAmi();

	DiamondTrap&	operator=(DiamondTrap const& src); //creo que no sirve para nada

};

#endif
