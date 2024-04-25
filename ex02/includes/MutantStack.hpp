/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:56:23 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/25 18:32:20 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_H
# define MUTANSTACK_H

#include <stack>

template<typename T>
class MutantStack {
public:
	MutantStack();
	MutantStack(const MutantStack& src);
	~MutantStack();

	MutantStack&	operator=(const MutantStack& src);

private:
	std::stack	_stack;
};

#endif