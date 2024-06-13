/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:32:37 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/13 13:40:50 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{
	int a = 7;
	int b = 9;

	swap<int>(a, b);
	std::cout << a << std::end;
	std::cout << b << std::endl;

	return 0;
}