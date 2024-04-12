/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:25:23 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/11 18:18:07 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm Void Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& Target) : AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm Target Constructor called." << std::endl;
	this->_target = Target; // target es lo mismo que name en el AForm?? Para añadirlo
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm Copy Constructor called." << std::endl;
	if (this != &src)
		this->_target = src._target; //NO SE SI SE PODRA PORQUE _TARGET ES PRIVATE
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {
	std::cout << "ShrubberyCreationForm Equal Operator called." << std::endl;
	if (this != &src) {
		this->_target = src.getTarget();
		this->setSign(src.getSign());
	}
	return *this;
}

void	ShrubberyCreationForm::action() const {
	std::string filename = this->_target; // A LO MEJOR SE PUEDE AÑADIR AQUI CON + _shuberry
	filename.append("_shubbery");
	std::ofstream file(filename.c_str());

	if (file.is_open()) {
		file << "      ^\n";
		file << "     / \\\n";
		file << "    /   \\\n";
		file << "   /     \\\n";
		file << "  /       \\\n";
		file << " /         \\\n";
		file << " -----------\n";
		file << "     | |\n";
		file << "     | |\n";
		file << "     | |\n";
		file << "     |_|\n";
		file.close();
	} else
		std::cout << "Unable to open the file";
}

std::string	ShrubberyCreationForm::getTarget() const {
	return this->_target;
}
