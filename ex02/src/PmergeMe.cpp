/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:11:08 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/06 18:07:41 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <stdexcept>
#include <limits.h>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <ctime>

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

void		PmergeMe::printCall(int sorted) const {
	if (!sorted)
		this->printContainer(this->_notSorted);
	else if (sorted == 1)
		this->printContainer(this->_list);
	else if (sorted == 2)
		this->printContainer(this->_vector);
}

double		PmergeMe::getDuration(int	i){
	if (i == 0)
		return this->_sortListDuration;
	else if (i == 1)
		return this->_sortVectorDuration;
	return 0;
}

void	PmergeMe::sort() {
	clock_t start_time = clock();
	this->sortAlgorithm(this->_list);
	clock_t end_time = clock();
	// this->_sortListDuration = (double)(end_time - start_time) / (double)CLOCKS_PER_SEC * 1e6;
	this->_sortListDuration = (double)(end_time - start_time) / (double)CLOCKS_PER_SEC * 1000.0;

	
	clock_t start_time_2 = clock();
	this->sortAlgorithm(this->_vector);
	clock_t end_time_2 = clock();
	// this->_sortVectorDuration = (end_time_2 - start_time_2) / (double)CLOCKS_PER_SEC * 1e6;
	this->_sortVectorDuration = (end_time_2 - start_time_2) / (double)CLOCKS_PER_SEC * 1000.0;
}

void	PmergeMe::sortAlgorithm(std::list<int>& list) {
	if (list.size() < 2 || isSorted(list))
		return ;
	bool	imp = false;
	int		impar;

	if (list.size() % 2 != 0) {
		impar = list.back();
		list.pop_back();
		imp = true;
	}
	std::list<int>::iterator	begin = this->_list.begin();
	std::list<int>::iterator	end = this->_list.end();
	while(begin != end) {
		std::list<int>::iterator	next = std::next(begin);
		if (*begin > *next)
			std::swap(*begin, *next);
		std::advance(begin, 2);
	}
	
	for (size_t width = 2; width <= list.size(); width *= 2) { // Controla el ancho de los subconjuntos
		std::list<int>::iterator	begin = list.begin();

		while (std::distance(begin, list.end()) > 0) {
			std::list<int>::iterator	middle = begin;
			std::advance(middle, std::min(width, static_cast<size_t>(std::distance(begin, list.end()))));

			std::list<int>::iterator	end = middle;
			std::advance(end, std::min(width, static_cast<size_t>(std::distance(middle, list.end()))));

			std::inplace_merge(begin, middle, end);
			begin = end;
		}
	}
	if (imp == true)
		list.insert(std::upper_bound(list.begin(), list.end(), impar), impar);
}

void	PmergeMe::sortAlgorithm(std::vector<int>& vector) {
	if (vector.size() < 2 || isSorted(vector))
		return ;
	bool	imp = false;
	int		impar;

	if (vector.size() % 2 != 0) {
		impar = vector.back();
		vector.pop_back();
		imp = true;
	}
	std::vector<int>::iterator	begin = this->_vector.begin();
	std::vector<int>::iterator	end = this->_vector.end();
	while(begin != end) {
		std::vector<int>::iterator	next = std::next(begin);
		if (*begin > *next)
			std::swap(*begin, *next);
		std::advance(begin, 2);
	}
	
	for (size_t width = 2; width <= vector.size(); width *= 2) { // Controla el ancho de los subconjuntos
		std::vector<int>::iterator	begin = vector.begin();

		while (std::distance(begin, vector.end()) > 0) {
			std::vector<int>::iterator	middle = begin;
			std::advance(middle, std::min(width, static_cast<size_t>(std::distance(begin, vector.end()))));

			std::vector<int>::iterator	end = middle;
			std::advance(end, std::min(width, static_cast<size_t>(std::distance(middle, vector.end()))));

			std::inplace_merge(begin, middle, end);
			begin = end;
		}
	}
	if (imp == true)
		vector.insert(std::upper_bound(vector.begin(), vector.end(), impar), impar);
}

size_t	PmergeMe::getSize() const {
	return this->_notSorted.size();
}
