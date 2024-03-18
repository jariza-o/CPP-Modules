/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:43:45 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/18 15:54:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter {
public:
	virtual void	attack(std::string const& target) = 0;
	void			sayHello(std::string const& target);
};

class Warrior :: public ACharacter {
public:
	virtual void	attack(std::string const & target);
};

void	ACharacter::sayHello(std::string const& target) {
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::attack(std::string const& target) {
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

class ICoffeeMaker {
public:
	virtual void	fillWaterTank(IWaterSource* src) = 0;
	virtual ICoffe*	makeCoffee(std::string const& type) = 0;
};

int main() {
	ACharacter*	a = new Warrior();

	// This would Not be ok because ACharacter is abstract
	// ACharacter*	b = new ACharacter();
	
	a->sayHello("students");
	b->attack("roger");
}