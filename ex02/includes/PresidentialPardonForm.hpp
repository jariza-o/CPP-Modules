/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:45:57 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/10 21:46:52 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "./AForm.hpp"
#include <iostream>
#include <stdexcept>

class PresidentialPardonForm : public AForm {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& Target);
	PresidentialPardonForm(const PresidentialPardonForm& src);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm& src);

	void action() const;

private:
	std::string _target; //tiene que ser const??
};

#endif
