/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:18:32 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/29 13:26:53 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

class RadScorpion : public Enemy{
	
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &s);
		~RadScorpion();
		void takeDamage(int a);
};