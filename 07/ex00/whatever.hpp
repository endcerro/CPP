/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:51:05 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/14 15:56:57 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const & max(T const & a, T const & b)
{
	return ((a > b) ? a : b);
}

template<typename T>
T const & min(T const & a, T const & b)
{
	return ((a < b) ? a : b);
}

#endif