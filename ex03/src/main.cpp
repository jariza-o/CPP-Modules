/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:21:50 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/15 14:52:38 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Intern.hpp"
#include <stdexcept>

int	main() {
	std::cout << "TESTS CONSTRUCTORS" << std::endl;
	Intern	random;
	AForm*	robot;
	AForm*	presi;
	AForm*	tree;
	Bureaucrat Jimmy("Jimmy", 144);
	std::cout << std::endl << std::endl;

	std::cout << "TEST makeForm" << std::endl;
	robot = random.makeForm("robotomy request", "RR");
	presi = random.makeForm("presidential request", "Pallete");
	tree = random.makeForm("shurubbery request", "Bosque");
	std::cout << std::endl << std::endl;
	
	std::cout << "TEST FORM" << std::endl;
	Jimmy.signForm(*robot);
	Jimmy.executeForm(*robot);
	std::cout << std::endl << std::endl;
	
	std::cout << "TEST Operator <<" << std::endl;
	std::cout << *presi << *robot << *tree << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "TEST Wrong Input" << std::endl;
	delete robot;
	robot = random.makeForm("shurubbere request", "Bender");
	try {
		if (robot == NULL)
			throw std::exception();
		robot->execute(Jimmy);
	} catch(const std::exception& e) {
		std::cout << "MAKEFORM FAIL!!!!!!" << std::endl;
	}
	std::cout << std::endl << std::endl;

	delete presi;
	delete tree;

	return 0;
}
