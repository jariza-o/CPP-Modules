/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:15:37 by jariza-o          #+#    #+#             */
/*   Updated: 2024/05/04 20:06:15 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <stdexcept>
RPN::RPN() {

}

RPN::RPN(const RPN& src) {
	if (this != &src)
		this->_container = src._container;
}

RPN::RPN(char* src) {
	std::stringstream	stm(src);
	std::string			data;
	double				num , n1, n2;

	while (stm) {
		stm >> data;
		if (stm.fail()) // Comprueba si acaba
			break ;
		if (data[1] != '\0' && (data[0] < '0' || data[0] > '9') && (data[0] != '+' || data[0] != '-' || data[0] != '/' || data[0] != '*')) {
			throw std::exception();
			break ;
		}
		if ((data[0] != '+' && data[0] != '-' && data[0] != '/' && data[0] != '*')) {
			num = std::atof(data.c_str());
			this->_container.push(num);
		}
		else {
			if (this->_container.size() < 2)
				throw std::exception();
			switch (data[0])
			{
			case '+':
				n2 = this->_container.top();
				this->_container.pop();
				n1 = this->_container.top();
				this->_container.pop();
				this->_container.push(n1 + n2);
				break;
			
			case '-':
				n2 = this->_container.top();
				this->_container.pop();
				n1 = this->_container.top();
				this->_container.pop();
				this->_container.push(n1 - n2);
				break;
			
			case '*':
				n2 = this->_container.top();
				this->_container.pop();
				n1 = this->_container.top();
				this->_container.pop();
				this->_container.push(n1 * n2);
				break;
			
			case '/':
				n2 = this->_container.top();
				this->_container.pop();
				n1 = this->_container.top();
				this->_container.pop();
				this->_container.push(n1 / n2);
				break;
			}
		}
	}
	if (this->_container.size() == 1)
		std::cout << this->_container.top() << std::endl;
	else
		throw std::exception();
}

RPN::~RPN() {

}

RPN&	RPN::operator=(const RPN& src) {
	if (this != &src)
		*this = src;
	return *this;
}