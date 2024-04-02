/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:21:50 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/02 17:30:53 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main() {
	Bureaucrat	a;
	Bureaucrat	b("PEPE");
	Bureaucrat	c(149);
	Bureaucrat	d("Andrés", 2);

	std::cout << "Name Bureaucrat A: " << a.getName() << std::endl;
	std::cout << "Name Bureaucrat B: " << b.getName() << std::endl;

	std::cout << "The Grade of C is: " << c.getGrade() << std::endl;
	c.decrementGrade();
	std::cout << "The Grade of C is: " << c.getGrade() << std::endl;
	c.decrementGrade();
	std::cout << "The Grade of C is: " << c.getGrade() << std::endl;

	std::cout << "The Grade of D is: " << d.getGrade() << std::endl;
	d.incrementGrade();
	std::cout << "The Grade of D is: " << d.getGrade() << std::endl;
	d.incrementGrade();
	std::cout << "The Grade of D is: " << d.getGrade() << std::endl;

	return 0;
}
