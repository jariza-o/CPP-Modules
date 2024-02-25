/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:23:03 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/25 19:25:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
// #include <iomanip> //read function
// #include <fstream>

class Contact
{
public:
	Contact(/* args */);
	~Contact();

	void		CreateContact( void );
	void		getInformation( void );
	void		getDarkSecret( void );
private:
	std::string FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	Phone;
	std::string	DarkSecret;
};

#endif