/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:35:28 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/15 15:52:59 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {
public:
	ClapTrap( void );
	ClapTrap( std::string Name );
	ClapTrap( const ClapTrap& src );
	~ClapTrap();

	virtual void	attack( const std::string& target ); //Se pasa a virtual para poder sobreescribirla en ScavTrap
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	bool	checkInfo( void ) const;

	std::string	getName( void ) const;
	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getAttackPoints( void ) const;
	void		setName( const std::string Name );
	void		setHitPoints( unsigned int amount );
	void		setEnergyPoints( unsigned int amount );
	void		setAttackPoints( unsigned int amount );


protected: // Se cambia de private a protected para que en la clase heredara se pueda modificar
	std::string	_Name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
	
};

#endif
