/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:01:06 by edal--ce          #+#    #+#             */
/*   Updated: 2021/05/04 17:29:00 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP 

#include <iostream>

template<typename T, typename F>
void iter(T arr[],unsigned int s, F fun)
{
	std::cout << "Iter call" << std::endl;
	for (unsigned int i = 0; i < s; i++)
	{
		fun(arr[i]);
	}
}

template<typename T>
void incr(T &t)
{
	t++;
}

#endif 