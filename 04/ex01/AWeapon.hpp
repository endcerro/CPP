/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:47:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 16:19:37 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP 

#include <iostream>

class AWeapon
{

	public:
		AWeapon(const std::string &name, int apcost, int damage);
		AWeapon(const AWeapon &w);
		AWeapon& operator=(const AWeapon &w);
		virtual ~AWeapon();
		const std::string &getName() const;
		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack() const = 0;

	protected :
		std::string _name;
		int _dmg;
		int _cost;
};
#endif