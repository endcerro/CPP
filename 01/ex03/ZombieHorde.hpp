/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:07:58 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/14 21:06:00 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde {
	
	public:
		ZombieHorde(int n);
		ZombieHorde(void);
		ZombieHorde(const ZombieHorde &z);
		ZombieHorde& operator= (const ZombieHorde &f);
		~ZombieHorde();
		void Announce(void) const;
	private:
		int 	_ammount;
		Zombie 	*_horde;
		static std::string _names[5];
		static std::string _types[5];
};	


#endif