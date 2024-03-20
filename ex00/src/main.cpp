/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:34:36 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 18:23:16 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main() {
	const Animal*	meta = new Animal(); 
	const Animal* 	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;


	const WrongAnimal*	k = new WrongCat();
	const WrongAnimal*	l = new WrongAnimal();

	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl; 
	k->makeSound(); //will output the WrongCat sound!
	l->makeSound();

	delete k;
	delete	l;

	return 0;
}