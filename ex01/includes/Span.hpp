/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:44:22 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/25 18:42:38 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm> //No sé si es necesaria
#include <stdexcept>

class Span {
public:
	Span();
	Span(const unsigned int N);
	Span(const Span& src);
	~Span();

	Span&	operator=(const Span& src);

	void	addNumber(int singleNumber);

	int		shortestSpan();
	int		longestSpan();

	void	printVector();

	class VectorFull : public std::exception {
	public:
		const char* what() const throw();
	};

	class VectorEmpty : public std::exception {
	public:
		const char* what() const throw();
	};

private:
	std::vector<int>	_vector;
	unsigned int	_N;
};

#endif
