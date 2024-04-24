/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:44:22 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/24 20:50:24 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
public:
	Span();
	Span(const unsigned int N);
	Span(const Span& src);
	~Span();

	Span&	operator=(const Span& src);

	void	addNumber(int singleNumber);

	void	shortestSpan();
	void	longestSpan();

private:
	std::vector<int>	_vector;
	const unsigned int	_N;
};

#endif
