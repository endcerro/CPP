/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:19:44 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/25 16:55:12 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <iostream>
class HumanA
{
	public:
		HumanA();
		~HumanA();
		HumanA(const std::string name, const Weapon &weapon);
		void attack() const;
	private :
		const std::string _name;
		const Weapon &_weapon;
};
#endif