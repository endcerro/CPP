/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:15:12 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 15:55:01 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PEON_HPP
#define PEON_HPP 

#include <iostream>
#include "Victim.hpp"

//COPILEN HERIT OK

class Peon : public Victim
{
	public:
		Peon(std::string name);
		~Peon();
		void getPolymorphed() const;
		
};
#endif