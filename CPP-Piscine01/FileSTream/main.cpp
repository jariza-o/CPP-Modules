/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:10:05 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/01 15:21:38 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main() {
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;
	
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	//-----------------------------------

	std::ofstream	ofs("test.out");
	ofs << "i like ponies a whole down lot" << std::endl;
	ofs.close();
}

