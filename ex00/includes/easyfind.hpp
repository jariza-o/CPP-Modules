/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:11:53 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/22 19:25:14 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>

template<typename T>
int	easyfind(T src, int i) {
	for (int j; T[j]; j++) {
		if (T[j] == i)
			return 1;
	}
	throw std::exception("Valor Not Founded");
}

#endif