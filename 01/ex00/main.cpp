/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:12:26 by edal              #+#    #+#             */
/*   Updated: 2021/03/27 16:45:21 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Pony.hpp"

Pony *PonyOnTheHeap(void)
{
	Pony *alloc = new Pony("John", 255,255,255);
	return alloc;
}

Pony PonyOnTheStack(void)
{
	Pony stack =Pony("Johanna", 0,0,0);
	return stack;
}

int main()
{
	Pony stack = PonyOnTheStack();
	Pony *heap = PonyOnTheHeap();

	stack.present();
	heap->present();
		
	Pony copy(stack);

	copy.present();

	delete heap;
	return (0);
}