/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:37:56 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/24 16:50:16 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "./AMateria.hpp"
#include "./ICharacter.hpp"

class Character : public ICharacter {
public:
	Character( void );
	Character( const Character& src );
	~Character();
	
	std::string const&	getName() const;
	void				equip( AMateria* m );
	void				unequip( int idx );
	void 				use( int idx, ICharacter& target );

	AMateria*	getMateria(int idx);

	Character&	operator=( const Character& src );

private:
	std::string	_name;
	AMateria*	_allMateria[4]; // NOSE QUE TAMAÑO PONER AUN || Tiene que ser puntero porque al ser abstracta no se puede instanciar, pero si ver la dirección de memoria
	// Creo que tiene que ser un array de materia ya que unequip no la elimina
};

#endif
