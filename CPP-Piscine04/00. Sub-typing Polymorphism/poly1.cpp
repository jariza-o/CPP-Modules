/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:14:38 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/18 15:31:47 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character {
public:
	void	sayHello(std::string const& target);
};

class Warrior : public Character {
public:
	void	sayHello(std::string const& target);
};

class Cat {
	//[...]
};

void	Character::sayHello(std::string const& target) {
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const& target) {
	std::cout << "F*** off " << target << ", I don't like you !" << std::endl;
}

int	main() {
	// This is OK, obviously, Warrior IS a Warrior
	Warrior*	a = new Warrior();

	// This is also OK becuase Warrior IS a Character
	Character*	b = new Warrior();
	
	// This would NOT be ok because Character IS NOT a Warrior
	// (Althought they ARE related, and W IS-A C, the reverse is untree)
	// Warrior* c = new Character();

	// This would NOT be ok because Character IS NOT a Character
	// (They are not even related)
	// Character* c = new Cat();
	
	a->sayHello("students");
	b->sayHello("students");
}