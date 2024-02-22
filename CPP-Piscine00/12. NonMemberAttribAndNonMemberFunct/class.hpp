/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:47:07 by jariza-o          #+#    #+#             */
/*   Updated: 2024/02/22 15:44:36 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

class Sample {
	
public:

	Sample( void );
	~Sample( void );


	static int		getNbInst( void );


private:

	static int		_nbInst;
};

#endif
