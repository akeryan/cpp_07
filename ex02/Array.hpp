/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:26:56 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/13 19:47:43 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template <typename T>
class Array 
{
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array &other);
		T &operator[] (unsigned int index);
		const T &operator[](unsigned int index) const;
		const Array &operator=(const Array &other);
		unsigned int size(void) const;
	private:
		T *_arr;
		unsigned int _arraySize;
};

template <typename T>
Array<T>::Array() 
{
	_arraySize = 0;
	_arr = new T[0]; 
}

template <typename T>
Array<T>::~Array() 
{
	if (_arr != NULL)
		delete [] _arr;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_arraySize = n;
	_arr = new T[_arraySize];	
}

template <typename T>
Array<T>::Array(const Array &other)
{
	_arraySize = other._arraySize;
	_arr = new T[other._arraySize];
	*this = other;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= _arraySize)
		throw(std::out_of_range("Index is out of range"));
	return _arr[index]; 
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index < 0 || index >= _arraySize)
		throw(std::out_of_range("Index is out of range"));
	return _arr[index]; 
}

template <typename T>
const Array<T> &Array<T>::operator=(const Array<T> &other)
{
	if (this != &other) {
		if (_arr != NULL)
			delete [] _arr;
		this->_arraySize = other._arraySize;
		_arr = new T[_arraySize];
		for (unsigned int i = 0; i < _arraySize; i++) {
			_arr[i] = other._arr[i];
		}
	}
	return *this;
}

template <typename T>
std::ostream &operator<<(std::ostream &osObj, const Array<T> &obj)
{
	for (unsigned int i = 0; i < obj.size(); i++) {
		osObj << obj[i] << " ";
	}
	return osObj;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return _arraySize;
}

#endif