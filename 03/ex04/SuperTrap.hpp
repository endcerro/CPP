/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:14:13 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:05:49 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SUPERTRAP_H
#define SUPERTRAP_H
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public FragTrap, public NinjaTrap
{
	public:	
		SuperTrap(std::string name);
		~SuperTrap();
		void meleeAttack(const std::string &tgt);
		void rangedAttack(const std::string &tgt);
		void disp() const;
};

#endif