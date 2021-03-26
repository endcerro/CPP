/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:19:55 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 17:20:43 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Sorcerer.hpp"

int main()
{
	/* code */
	Sorcerer s("Michel", "Warlock");
	Victim v("Thomas");
	
	s.polymorph(v);

	std::cout << s << std::endl	;
	std::cout << v << std::endl	;

	return 0;
}