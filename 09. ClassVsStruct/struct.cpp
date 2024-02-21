/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:04:20 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/21 19:05:29 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "struct.hpp"

Sample1::Sample1(void)
{
    std::cout << "Constructor called" << std::endl;
    this->foo = 42;
    return ;
}

Sample1::~Sample1(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Sample1::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return ;
}
