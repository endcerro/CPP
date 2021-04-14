/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:29:44 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/14 17:35:13 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
int main()
{	
	// int arr[5] 
	std::list<int> v;// = {1,2,3,4,5};
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	easyfind(v, 4);
	// std::cout << ret << std::endl;
	return 0;
}