/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:07:50 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/13 14:59:48 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void printInt(int a)
{
	std::cout << a << std::endl;
}

void printFloat(float a)
{
	std::cout << a << std::endl;
}

void printString(std::string str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	int arrInt[] = {1,2,3,4,5};
	int intSize = sizeof(arrInt)/sizeof(arrInt[0]);

	float arrF[] = {1.0f, 2.1f, 4.3f, 5.5f};
	int fSize = sizeof(arrF)/sizeof(arrF[0]);

	std::string arrStr[] = {"one", "two", "three"};
	int sSize = 3; 
		
	::iter(arrInt, intSize, printInt);
	::iter(arrF, fSize, printFloat);
	::iter(arrStr, sSize, printString);

	return 0;
}