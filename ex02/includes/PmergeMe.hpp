/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:10:32 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/06 16:44:32 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include  <list>
#include <vector>
#include <iostream>
#include <iterator>

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(const PmergeMe& src);
	PmergeMe(char** argv);
	~PmergeMe();

	PmergeMe&	operator=(const PmergeMe& src);
	void		printList(int sorted) const;

	template<typename T>
	bool		isSorted(const T& container) const {
		typename T::const_iterator	begin = container.begin();
		for (; begin != container.end(); std::advance(begin, 1)) {
			typename T::const_iterator	comp = begin;
			std::advance(comp, 1);
			for (; comp != container.end(); comp++) {
				if (*begin > *comp)
					return false;
			}
		}
		return true;
	}
	void		sort();
	void		sortAlgorithm(std::list<int>& list);
	void		sortAlgorithm(std::vector<int>& vector);

private:
	std::list<int>		_notSorted;
	std::list<int>		_list;
	std::vector<int>	_vector;
};

#endif