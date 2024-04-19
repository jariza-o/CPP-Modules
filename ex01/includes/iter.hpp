/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:16:00 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/19 16:56:48 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template <typename T, typename F>
void    iter(T* array, int length, F  func) {
	for (int i = 0; i < length; i++) {
		func(array[i]);
	}
}

#endif