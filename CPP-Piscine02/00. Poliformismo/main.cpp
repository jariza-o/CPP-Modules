/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:11:41 by jariza-o          #+#    #+#             */
/*   Updated: 2024/03/04 17:14:34 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sample.hpp"

int	main( void ) {
	Sample	Sample;

	Sample.bar('a');
	Sample.bar(42);
	Sample.bar(3.14f);
	Sample.bar(Sample);

	return 0;
}