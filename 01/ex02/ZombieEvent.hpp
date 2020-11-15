/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:08:53 by edal              #+#    #+#             */
/*   Updated: 2020/11/15 19:28:35 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H value
	
#include "Zombie.hpp"
#include <cstdlib> 
#include <ctime>

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		Zombie* newZombie(std::string name) const;
		void setZombieType(std::string name);
		void randomChump(void) const;
	private:
		std::string _ZombieType;
		static std::string _names[5];
};

#endif