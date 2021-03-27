/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 18:13:54 by edal              #+#    #+#             */
/*   Updated: 2021/03/27 16:44:17 by edal--ce         ###   ########.fr       */
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
		Pony(const Pony &p);
		~Pony(void);
		void present(void) const;
		Pony& operator= (const Pony &p);
	private:
		std::string _name;
		unsigned int _r;
		unsigned int _g;
		unsigned int _b;

};

#endif