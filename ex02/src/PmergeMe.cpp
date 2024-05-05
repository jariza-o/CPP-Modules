/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:11:08 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/05 12:24:31 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(const PmergeMe& src) {
	
}

PmergeMe::PmergeMe(char** argv) {
	
}

PmergeMe::~PmergeMe() {

}

PmergeMe&	PmergeMe::operator=(const PmergeMe& src) {
	
}

void		PmergeMe::printlist(int sorted) const {
	if (!sorted)
		std::list<int> list = this->_notSorted;
	else
		std::list<int> list = this->_list;
	
	for (; list.begin())

}
