/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:13:54 by edal              #+#    #+#             */
/*   Updated: 2021/02/13 17:07:45 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>
#include <iostream>
#ifndef PONY_H
#define PONY_H

class Pony
{
	public:
		Pony(std::string name, unsigned int r, unsigned int g, unsigned int b);
		~Pony(void);
		void present(void) const;
	private:
		std::string _name;
		unsigned int _r;
		unsigned int _g;
		unsigned int _b;

};

#endif