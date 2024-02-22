/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:53:54 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/21 19:06:27 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Sample2::Sample2(void)
{
    std::cout << "Constructor called" << std::endl;
    this->foo = 42;
    return ;
}

Sample2::~Sample2(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void Sample2::bar(void) const
{
    std::cout << "Member function bar called" << std::endl;
    return ;
}
