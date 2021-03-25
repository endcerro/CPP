/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:07:58 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/25 16:53:14 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde {
	
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void Announce(void) const;
	private:
		int 	_ammount;
		Zombie 	*_horde;
		static std::string _names[5];
		static std::string _types[5];
};	


#endif