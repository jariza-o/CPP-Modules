/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:15:28 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/21 15:20:33 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

#include <iostream>
#include "AMateria.hpp"

class ICharacter { //HAY QUE METER MAS COSAS?? ME IMAGINO QUE ALGUN CONSTRUCTOR
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0; virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif