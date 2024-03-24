/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:05:35 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/24 20:17:22 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <iostream>
#include "./AMateria.hpp"
#include "./IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& src );
	~MateriaSource();

	void		learnMateria( AMateria* m);
	AMateria*	createMateria( std::string const & type );

	AMateria* getMateria(int idx);

	MateriaSource&	operator=( const MateriaSource& src );

private:
	AMateria*	_materias[4];
};

#endif