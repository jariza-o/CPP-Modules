/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:23:03 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/25 16:40:44 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
public:
	Contact(/* args */);
	~Contact();

	static void	writeInformation ( std::istream& str, int option );
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