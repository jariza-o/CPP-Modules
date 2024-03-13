/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:35:28 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/13 18:18:00 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap {
public:
	ClapTrap( void );
	ClapTrap( std::string Name );
	ClapTrap( const ClapTrap& src );
	~ClapTrap();

	void	attack( const std::string& target );
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


private:
	std::string	_Name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
	
};
