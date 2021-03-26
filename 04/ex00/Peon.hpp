/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:15:12 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 17:40:05 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PEON_HPP
#define PEON_HPP 

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		~Peon();
		void getPolymorphed() const;
		
};
#endif