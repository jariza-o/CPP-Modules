/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:49:06 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/12 15:58:41 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal {
private:
	int	_numberOfLegs;

public:
	Animal();
	Animal( Animal const & );
	Animal& operator=( Animal const & );
	~Animal();
	
	void	run( int distance );
	void	call();
	void	eat( std::string const& what );
	void	walk( int distance );
};

class Other : public Animal {
public:
	Other();
	Other( Cat const & );
	Other& operator=( Other const & );
	~Other();
};

class Cat : public Animal {
public:
	Cat();
	Cat( Cat const & );
	Cat& operator=( Cat const & );
	~Cat();

	void	scornSomeone( std::string const& target );
};

class Pony : public Animal {
public:
	Pony();
	Pony( Pony const & );
	Pony& operator=( Pony const & );
	~Pony();

	void	doMagic( std::string const& target );
};
