/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:13:54 by edal              #+#    #+#             */
/*   Updated: 2020/11/15 18:31:54 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <iostream>
#ifndef PONY_H
#define PONY_H

class Pony
{
	public:
		
		Pony(void);
		Pony(std::string name, unsigned int r, unsigned int g, unsigned int b);
		~Pony(void);
		void present(void) const;
	private:
		std::string name;
		unsigned int r;
		unsigned int g;
		unsigned int b;

};

#endif