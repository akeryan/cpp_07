/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:07:50 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/14 07:11:15 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#include "Awesome.hpp"

int main(void)
{
	int arrInt[] = {1,2,3,4,5};
	int intSize = sizeof(arrInt)/sizeof(arrInt[0]);

	float arrF[] = {1.0f, 2.1f, 4.3f, 5.5f};
	int fSize = sizeof(arrF)/sizeof(arrF[0]);

	std::string arrStr[] = {"one", "two", "three"};
	int sSize = sizeof(arrStr) / sizeof(arrStr[0]);
		
	::iter(arrInt, intSize, print);
	::iter(arrF, fSize, print);
	::iter(arrStr, sSize, print);

	return 0;
}