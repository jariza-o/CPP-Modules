/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:44:55 by jariza-o          #+#    #+#             */
/*   Updated: 2024/04/24 14:56:24 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template <typename T> 
T   max( T const& x, T const& y) {
		return ((x > y) ? x : y);
}
template <typename T> 
T   min( T const& x, T const& y) {
		return ((x < y) ? x : y);
}
template <typename T> 
void	swap( T &x, T &y) {
	T	x_sw = y;
	
	y = x;
	x = x_sw;
}

#endif