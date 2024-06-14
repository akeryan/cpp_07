/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:21:27 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/14 07:26:15 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "SomeClass.hpp"

int main(void)
{
	Array<int> A(3);
	Array<int> B;

	for (int i = 0; i < 3; i++) {
		A[i] = i + 3;
	}

	std::cout << "array A: "<< A << std::endl;

	B = A;
	std::cout << "array B: " << B << std::endl;
	A[0] = 7;
	std::cout << "array B: " << B << std::endl;

	Array<int> C(A);
	std::cout << "array C: " << C << std::endl;
	C[0] = 9;
	std::cout << "array A: " << A << std::endl;
	std::cout << "array C: " << C << std::endl;

	try {
		A[4] = 0;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Array<SomeClass> D[3];
	for (int i = 0; i < 3; i++) {
		D[i] = SomeClass(i + 10);
	}

	return 0;
}