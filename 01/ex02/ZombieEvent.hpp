/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:08:53 by edal              #+#    #+#             */
/*   Updated: 2021/03/27 16:58:35 by edal--ce         ###   ########.fr       */
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
		ZombieEvent(const ZombieEvent &z);
		ZombieEvent& operator= (const ZombieEvent &z);
		
		Zombie* newZombie(std::string name) const;
		void setZombieType(std::string name);
		void randomChump(void) const;
	private:
		std::string _ZombieType;
		static std::string _names[5];
};

#endif