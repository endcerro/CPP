/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:47:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/27 16:33:03 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP 

#include <iostream>

class AWeapon
{

	public:
		// AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		std::string  getName() const;
		
		// [...] ~AWeapon();
		// std::string [...] getName() const;
		// int getAPCost() const;
		// int getDamage() const;
		// [...] void attack() const = 0;
	private :
		std::string _name;
		int _dmg;
		int _cost;
};
#endif