/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:31:13 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/17 13:34:12 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv) {
	if (argc == 2) {
        ScalarConverter a;
        
        std::string src(argv[1]);
        try {
            a.convert(src);
        } catch (const std::out_of_range& e) {
            //e.~out_of_range(); // por que esto nmo funciona???
        }
    }
    else
        std::cout << "The input arguments is incorrect" << std::endl;
}
