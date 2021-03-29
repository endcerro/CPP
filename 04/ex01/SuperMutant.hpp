/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:18:32 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/29 13:21:52 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

class SuperMutant : public Enemy{
	
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &s);
		~SuperMutant();
		void takeDamage(int a);
};