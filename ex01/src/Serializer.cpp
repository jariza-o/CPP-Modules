/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:18:03 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/17 17:06:45 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer() {
    
}

Serializer::Serializer(const Serializer& src) {
    (void)src;
}

Serializer::~Serializer() {
    
}


Serializer&	Serializer::operator=(const Serializer& src) {
    (void)src;

    return *this;
}

uintptr_t	Serializer::serialize(Data* ptr) { // No hay que poner que es static
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}
