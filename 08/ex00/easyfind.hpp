/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:29:33 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/14 17:35:38 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& cont, int n)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw std::exception();
	return (it);
}

#endif