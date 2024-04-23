/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:59:05 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/23 17:45:12 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"

/* Lo iteradores son como punteros para los Containers */

template<typename T>
void	easyfind(const T& src, int i) {
	typename T::const_iterator it; // se declara como typename al ser iterator de una plantilla

	it = find(src.begin(), src.end(), i); // busca i en el container src desde el principio oal final
	if (it == src.end()) // end() te devuelve como nulo
		throw NotFounded();
	std::cout << "Value " << *it << " founded." << std::endl;
}

const char* NotFounded::what() const throw() {
	return "This int founded in the container";
}

