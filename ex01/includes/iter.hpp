/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:16:00 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/20 15:41:24 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template <typename T, typename F> // CUando son 2 tipos distintos hay que crear 2 tipos de template
void    iter(T* array, int length, F  func) {
	for (int i = 0; i < length; i++) {
		func(array[i]);
	}
}

template <typename T>
void	print(T input) {
	std::cout << "Print: " << input << std::endl;
}

#endif