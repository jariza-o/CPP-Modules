/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:11:53 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/23 17:15:17 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

template<typename T>
void	easyfind(const T& src, int i);

class	NotFounded : public std::exception {
	public:
		const char* what() const throw();
};

#include "./easyfind.tpp"

#endif
