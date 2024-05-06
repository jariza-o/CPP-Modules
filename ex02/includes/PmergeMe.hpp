/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:10:32 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/06 12:31:15 by jariza-o         ###   ########.fr       */
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
	PmergeMe(char** argv);
	~PmergeMe();

	PmergeMe&	operator=(const PmergeMe& src);
	void		printList(int sorted) const;

	void		listAlgorithm(std::list<int>& list);

private:
	std::list<int>		_notSorted;
	std::list<int>		_list;
	std::vector<int>	_vector;
};

#endif