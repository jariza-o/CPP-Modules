/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:00:27 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/21 16:02:03 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include <iostream>
#include "./AMateria.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif