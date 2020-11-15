/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:12:26 by edal              #+#    #+#             */
/*   Updated: 2020/11/15 18:32:17 by edal             ###   ########.fr       */
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
	
	delete heap;
	return (0);
}