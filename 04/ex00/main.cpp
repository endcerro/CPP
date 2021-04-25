/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:19:55 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 15:56:04 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Sorcerer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peon michel = joe;
	robert.polymorph(joe);
	robert.polymorph(michel);
	return 0;

}