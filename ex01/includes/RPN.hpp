/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:15:35 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/04 19:55:22 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include <iostream>
#include <stack>

class RPN {
public:
	RPN();
	RPN(const RPN& src);
	RPN(char* src);
	~RPN();

	RPN&	operator=(const RPN& src);

	void	operation();

private:
	std::stack<double>	_container;
	int						_answer;
};

#endif
