/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:51:05 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/29 16:24:01 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T& a, T& b)
{
	// std::cout << "swap" << std::endl;
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const & max(T const & a, T const & b)
{
	// std::cout << "max" << std::endl;
	return ((a > b) ? a : b);
}

template<typename T>
T const & min(T const & a, T const & b)
{
	// std::cout << "min" << std::endl;
	return ((a < b) ? a : b);
}

#endif