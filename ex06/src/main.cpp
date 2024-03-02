/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:49:05 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/02 16:07:38 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	getLvl( char *str ) {
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i; i < 4; i++) {
		if (lvl[i] == str)
			return i;
	}
	return 404;
}

int	main( int argc, char **argv ) {
	if (argc != 2) {
		std::cout << "The numbers of parameters is incorrect." << std::endl;
		return 1;
	}
	Harl	harl;
	int		lvl = getLvl(argv[1]);

	switch (lvl) {
	case 0:
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;
	case 1:
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;
	case 2:
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;
	case 4:
		harl.complain("ERROR");
		break;
	default:
		std::cout <<  "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("PAPA");

	return 0;
}