/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:38:56 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/11 16:55:47 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTTOMYREQUESTFORM_H
# define ROBOTTOMYREQUESTFORM_H

#include "./AForm.hpp"
#include <iostream>
#include <stdexcept>

class RobotomyRequestForm : public AForm {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& Target);
	RobotomyRequestForm(const RobotomyRequestForm& src);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm& src);

	void action() const;

	std::string	getTarget() const;

private:
	std::string _target; //tiene que ser const??
};

#endif
