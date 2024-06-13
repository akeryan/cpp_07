/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:33:09 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/13 13:52:58 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T &a, T &b)
{
	if (a < b)
		return a;
	if (b < a)
		return b;
	return b;
}

template <typename T>
T max(T &a, T &b)
{
	if (a > b)
		return a;
	if (b > a)
		return b;
	return b;
}

#endif