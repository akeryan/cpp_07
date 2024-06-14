/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SomeClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 07:15:30 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/14 07:30:04 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOME_CLASS_HPP
#define SOME_CLASS_HPP

#include <iostream>

class SomeClass
{
	public:
		SomeClass():_num(0){};
		SomeClass(const int a): _num(a){};
		int get(void) const {return _num;};
		const SomeClass &operator=(const SomeClass &other);
	private:
		int _num;
};

std::ostream &operator<<(std::ostream &osObj, const SomeClass &obj)
{
	osObj << obj.get();
	return osObj;
}

const SomeClass &SomeClass::operator=(const SomeClass &other)
{
	if (this != &other) {
		this->_num = other.get();
	}
	return *this;
}

#endif