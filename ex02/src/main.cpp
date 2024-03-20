/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:34:36 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/20 21:13:12 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main() {
	const Animal* 	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	delete i;
	
	int	size = 10;
	const Animal*	manada[10];
	
	for(int i = 0; i < size / 2; i++)
		manada[i] = new Dog();
	for(int i = size / 2; i < size; i++)
		manada[i] = new Cat();
	
	for(int i = 0; i < size; i++)
		delete manada[i]; // No se puede librerar con: delete [] manada

	// Brain
	Cat	Galfier;

	Galfier.setBrainIdea(0, "Me encanta la LASAÑAAAAA.");
	std::cout << Galfier.getBrainIdea(0) << std::endl;
	std::cout << Galfier.getBrainIdea(123) << std::endl;
	std::cout << Galfier.getBrainIdea(7) << std::endl;

	// Animal a();
	return 0;
}