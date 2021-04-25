/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:18:32 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:01:40 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

//COPILEN OK

class SuperMutant : public Enemy{
	
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &s);
		SuperMutant& operator=(const SuperMutant &s);
		
		~SuperMutant();
		void takeDamage(int a);
};

#endif