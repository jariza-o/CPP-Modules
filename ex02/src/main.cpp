/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:21:50 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/11 18:16:01 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

int	main() {

	Bureaucrat  bob("Bob", 42);
    Bureaucrat  jim("Jim", 5);

    PresidentialPardonForm  presi("Miles");
    RobotomyRequestForm     robot("Miles");
    ShrubberyCreationForm   tree("Miles");


    std::cout << bob << jim;
    std::cout << presi << robot << tree << std::endl;
    
    bob.executeForm(presi);
    jim.executeForm(presi);
    bob.signForm(presi);
    jim.signForm(presi);
    bob.executeForm(presi);
    jim.executeForm(presi);

    jim.signForm(robot);
    jim.executeForm(robot);
    jim.signForm(tree);
    jim.executeForm(tree);

    std::cout << presi << robot << tree << std::endl;

    return 0;
}
