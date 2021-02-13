/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:19:44 by edal--ce          #+#    #+#             */
/*   Updated: 2021/02/13 14:48:03 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>
class HumanB
{
	public:
		HumanB();
		~HumanB();
		HumanB(const std::string name);
		void attack() const;
		void setWeapon(Weapon &weapon);
	private :
		const std::string _name;
		const Weapon *_weapon;
};
#endif