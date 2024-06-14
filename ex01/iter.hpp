/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:09:42 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/14 07:09:19 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *const arr, const int len, void(*const func)(T const &))
{
	for (int i = 0; i < len; i++) {
		func(arr[i]);
	}
}

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

#endif