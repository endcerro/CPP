/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:27:43 by edal              #+#    #+#             */
/*   Updated: 2021/04/30 14:03:43 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(70);
	sp.addNumber(1);
	sp.addNumber(150);
	sp.addNumber(25);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(123);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp.easyFill(50);
	sp.addNumber(800);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;	
	
	return 0;
}