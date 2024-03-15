/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:22:03 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/15 15:57:02 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap( void );
	FragTrap( std::string Name );
	FragTrap( const FragTrap& src );
	~FragTrap( void );

	void	highFivesGuys(void);

};

#endif