/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:12:46 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/24 20:26:21 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource() {
	std::cout << "MateriaSource Void Constructor called." << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& src ) : MateriaSource( src ) {
	std::cout << "MateriaSource Void Constructor called." << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource Destructor Constructor called." << std::endl;
}

void	MateriaSource::learnMateria( AMateria* m ) { //Busco si hay algun slot de materias vacio y se ela enseño
	for (int i = 0; i < 4; i++) {
		if (!this->_materias[i]) {
			this.materias[i] = m->clone();
			return ;
		}
	}
}
AMateria*	MateriaSource::createMateria( std::string const & type ) { // LAS QQUE DAN FALLO DE RETURN TIENEN QUE SER VIRTUAL
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] && this->_materias[i]->getType == type ) {
			return AMateria(this->_materias[i]->clone());
		}
	}
	
}

AMateria* MateriaSource::getMateria(int idx) {
	if (idx >= 0 && idx <= 3)
		return this->_materias[idx];
	return NULL;
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& src ) {
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != src.getMateria(i))
			this->_materias[i] = src.getMateria(i);
	}
	return *this;
}
