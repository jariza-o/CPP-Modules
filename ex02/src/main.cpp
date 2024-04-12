/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:21:50 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/12 09:02:31 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

int	main() {

	std::cout << "TESTS CONSTRUCTORS" << std::endl;
	Bureaucrat  bob("Bob", 42);
	Bureaucrat  jim("Jim", 5);
	Bureaucrat  charly("Charly", 146);

	PresidentialPardonForm  presi("Miles");
	RobotomyRequestForm     robot("Miles");
	ShrubberyCreationForm   tree("Miles");

	std::cout << std::endl << std::endl;
	// std::cout << "TESTS OPERATOR <<" << std::endl;
	// std::cout << bob << jim;
	// std::cout << presi << robot << tree << std::endl;
	
	// std::cout << std::endl << std::endl;
	std::cout << "TESTS ACTIONS <<" << std::endl;
	bob.executeForm(presi);
	jim.executeForm(presi);
	std::cout << std::endl;
	
	bob.signForm(presi);
	jim.signForm(presi);
	std::cout << std::endl;
	
	bob.executeForm(presi);
	jim.executeForm(presi);
	std::cout << std::endl;
	
	jim.signForm(robot);
	jim.executeForm(robot);
	jim.signForm(tree);
	jim.executeForm(tree);
	std::cout << std::endl;

	charly.signForm(robot);
	charly.executeForm(robot);
	charly.signForm(tree);
	charly.executeForm(tree);
	std::cout << std::endl;

	std::cout << presi << robot << tree << std::endl;

	return 0;
}
