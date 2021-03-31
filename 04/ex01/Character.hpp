/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:24 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 11:15:34 by edal--ce         ###   ########.fr       */
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
		const int getAP(void) const;
		const int getMAP(void) const;
		const AWeapon *getWeapon(void) const;
		const std::string &getName() const;
	private :
		std::string	_name;
		int			_ap;
		int 		_map;
		AWeapon		*_weapon;
};
std::ostream& operator<< (std::ostream& os, const Character &c);

#endif