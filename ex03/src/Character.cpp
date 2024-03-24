/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:20:40 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/24 16:56:18 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"

Character::Character( void ) : ICharacter() {
	std::cout << "Character Void Constructor called." << std::endl;
}

Character::Character( const Character& src ) : ICharacter( src ) {
	std::cout << "Character Copy Constructor called." << std::endl;
	*this = src;
}

Character::~Character() {
	std::cout << "Character Destructor called." << std::endl;
}

std::string const& Character::getName() const {
	return this->_name;
}
void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_allMateria[i]) {
			_allMateria[i] = m;
			return ;
		}
	}
}
void Character::unequip(int idx) {
	if ((idx >= 0 && idx <= 3) && this->_allMateria[idx])
		this->_allMateria[idx] == NULL;
}
void Character::use(int idx, ICharacter& target) {
	if ((idx >= 0 && idx <= 3) && this->_allMateria[idx])
		this->_allMateria[idx]->use(target);
}

AMateria* Character::getMateria(int idx) {
	if (idx >= 0 && idx <= 3)
		return this->_allMateria[idx];
	return NULL;
}

Character& Character::operator=(const Character& src) {
	std::cout << "Character Equal Operator called." << std::endl;
	if (this->_name != src.getName())
		this->_name = src.getName();
	// CHECKEAR SI LA COPIA DE INVENTARIO ESTA BIEN
	for (int i = 0; i < 4; i++) {
		if (this->_allMateria[i] != src.getMateria(i))
			this->_allMateria[i] = src.getMateria(i);
	}
	return *this;
}
