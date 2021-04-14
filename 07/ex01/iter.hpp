/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:01:06 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/14 15:58:00 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP 

#include <iostream>

template<typename T, typename F>
void iter(T arr[], int s, F fun)
{
	std::cout << "Iter call" << std::endl;
	for (int i = 0; i < s; i++)
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