/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:23:14 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/25 18:29:57 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv) {
	
	int	i = 0;
	int	n;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISSE *";
	while (argv[++i]) { //En c++ el NULL es nullptr (ej.: argv[++i] != nullptr)
		n = -1;
		while (argv[i][++n]) {
			std::cout << (char)std::toupper(argv[i][n]);
		}
		// if ((argc - i) > 1) // Según el ejemplo no debería de estar, aunque es lo suyo
		// 	std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}
