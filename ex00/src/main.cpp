/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:31:13 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/16 16:02:25 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv) {
	if (argc == 2) {
        ScalarConverter a;
        
        std::string src(argv[1]);
        a.convert(src);
    }
    else
        std::cout << "The input arguments is incorrect" << std::endl;
}
