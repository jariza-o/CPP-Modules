/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:11:08 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/06 13:58:53 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <stdexcept>
#include <limits.h>
#include <cmath>

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(const PmergeMe& src) {
	if (this != &src) {
		this->_notSorted = src._notSorted;
		this->_list = src._list;
		this->_vector = src._vector;
	}
}

PmergeMe::PmergeMe(char** argv) {
	int	i = 0;

	while(argv[++i]){
		for (int n = 0; argv[i][n]; n++) {
			if (argv[i][n] < '0' || argv[i][n] > '9')
				throw std::exception();
		}
		if (std::atof(argv[i]) < INT_MIN || std::atof(argv[i]) > INT_MAX)
			throw std::exception();
		this->_notSorted.push_back(static_cast<int>(std::atof(argv[i])));
		this->_list.push_back(static_cast<int>(std::atof(argv[i])));
		this->_vector.push_back(static_cast<int>(std::atof(argv[i])));
	}
}

PmergeMe::~PmergeMe() {

}

PmergeMe&	PmergeMe::operator=(const PmergeMe& src) {
	if (this != &src) {
		this->_notSorted = src._notSorted;
		this->_list = src._list;
		this->_vector = src._vector;
	}
	return *this;
}

void		PmergeMe::printList(int sorted) const {
	std::list<int> list;
	if (!sorted)
		list = this->_notSorted;
	else
		list = this->_list;
	
	std::list<int>::iterator	begin = list.begin();
	std::list<int>::iterator	end = list.end();
	for (; begin != end; begin++) {
		std::cout << *begin << " ";
	}
	std::cout << std::endl;
}

bool	listFin(std::list<int>::iterator	l, std::list<int>::iterator	r) {
	while (l != r) {
		
	}
}

void	PmergeMe::binaryInsert(std::list<int> A, int sizeA, int	value) {
	std::list<int>::iterator	l = A.begin();
	std::list<int>::iterator	r = A.end();
	--r;
	
	while (l <= r) {
		std::list<int>::iterator m = std::floor((l + r) / 2);
		if (A[m] < value)
			l = m + 1;
		else if
			r = m + 1;
		else
			return m;
	}
	// return unsuccessful;
}

void		PmergeMe::listAlgorithm(std::list<int>& list) {
	if (list.size() < 2)
		return ;
	bool						imp = false;
	int							impar;
	std::list<int>				menores;
	std::list<int>				mayores;
	std::list<int>::iterator	begin = this->_list.begin();
	std::list<int>::iterator	next = std::next(begin);
	std::list<int>::iterator	end = this->_list.end();
	while(next != end) {
		if (*begin < *next) {
			menores.push_back(*begin);
			mayores.push_back(*next);
		}
		else {
			menores.push_back(*next);
			mayores.push_back(*begin);
		}
		begin++;
		begin++;
		next++;
		next++;
	}
	this->listAlgorithm(mayores);
	if (list.size() % 2 != 0) {
		--next;
		impar = *next;
		imp = true;
	}
	list.clear();
	list.insert(list.end(), mayores.begin(), mayores.end());
	
	if (imp == true)
		list.push_back(impar);
	
}
