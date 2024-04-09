/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:21:50 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/09 17:41:54 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main() {

	Form a(149, 4);
	Form b(1, 200);
	Form c("pepe", 1, 3);
	Form d = a;

	std::cout << "THE NAME IS: " << b.getName() << std::endl;
	std::cout << "THE NAME IS: " << c.getName() << std::endl;

	Bureaucrat	buro("Andrés", 2);
	buro.signForm(c);

	buro.incrementGrade();
	buro.signForm(c);

	std::cout << "Form: " << b << std::endl;

	return 0;
}
