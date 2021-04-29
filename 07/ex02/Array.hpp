/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:18:45 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/29 16:32:23 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdexcept>
#include <iostream>
template<typename T>
class Array {
	
	public :
	
		Array() : _size(0)
		{
			_array = 0;
		}
		Array(unsigned int t) : _size(t)
		{
			_array = new T[t];
		}
		
		~Array()
		{
			delete _array;
			_array = 0;
		}
		int size() const
		{
			return _size;
		}
		Array(const Array &a) : _size(a._size)
		{
			_array = new T[a._size];
			for (int i = 0; i < _size; i++)
				_array[i] = a._array[i];
		}
		Array& operator=(Array<T> a)
		{
			delete _array;
			_array = new T[a._size];
			this->_size = a._size;
			for (int i = 0; i < _size; i++)
				_array[i] = a._array[i];
			return *this;
		}
		T& operator[](int p)
		{
			if (p < 0 || p >= _size)
				throw std::out_of_range("Out of bounds");
			return _array[p];
		}
		void print()
		{
			for (int i = 0; i < _size; i++)
				std::cout << _array[i] << " ";
			std::cout << std::endl;
		}
		class OutOfBoundsException : public std::exception 
		{
			public :
			OutOfBoundsException() throw();
			virtual const char* what() const throw()
			{
				return ("This index isn't available");
			}
		};
	private :
		int _size;
		T *_array;
};

#endif