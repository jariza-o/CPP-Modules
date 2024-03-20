/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:47:20 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:19:10 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal( const WrongAnimal& src );
	virtual ~WrongAnimal();

	virtual void	makeSound() const;

	WrongAnimal&			operator=( const WrongAnimal& src );
	std::string				getType() const;

protected:
	std::string	type;
};

#endif