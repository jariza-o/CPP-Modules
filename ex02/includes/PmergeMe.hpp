/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:10:32 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/04 20:19:53 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include  <list>
#include <vector>

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(const PmergeMe& src);
	~PmergeMe();

	PmergeMe&	operator=(const PmergeMe& src);

private:
	std::list<int>		_list;
	std::vector<int>	_vector;
};

#endif