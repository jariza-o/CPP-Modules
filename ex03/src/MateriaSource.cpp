/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:12:46 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/25 17:41:26 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << "MateriaSource Void Constructor called." << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& src ) {
	std::cout << "MateriaSource Void Constructor called." << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource Destructor Constructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

void	MateriaSource::learnMateria( AMateria* m ) { //Busco si hay algun slot de materias vacio y se la enseño
	std::cout << "LearnMateria" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (!this->_materias[i]) {
			this->_materias[i] = m->clone();
			delete m; // Es necesario para evitar leaks con el main del subject
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type ) { // LAS QQUE DAN FALLO DE RETURN TIENEN QUE SER VIRTUAL
	std::cout << "CreateMateria" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i]->getType() == type ) {
			return this->_materias[i]->clone();
		}
	}
	return NULL;
}

AMateria* MateriaSource::getMateria(int idx) const {
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
