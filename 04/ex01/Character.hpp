/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:24 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 16:24:40 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"
class Character {

	public:
		Character(std::string const &name);
		Character(const Character &c);
		Character& operator=(const Character &c);
		
		~Character();
		void equip(AWeapon *w);
		void attack(Enemy *e);
		void recoverAP(void);
		int getAP(void) const;
		int getMAP(void) const;
		AWeapon *getWeapon(void) const;
		const std::string &getName() const;
	private :
		std::string	_name;
		int			_ap;
		int 		_map;
		AWeapon		*_weapon;
};
std::ostream& operator<< (std::ostream& os, const Character &c);

#endif