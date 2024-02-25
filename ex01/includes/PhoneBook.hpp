/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:55:43 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/25 11:16:19 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook( void );
	~PhoneBook( void );

	void	Add( void );
	void	Search( void );
	void	Exit( void );
private:
	Contact	Contacts[8];
	int		OldContact;
};

#endif