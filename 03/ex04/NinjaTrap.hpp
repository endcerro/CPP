/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:01:57 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:15:51 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef NINJATRAP_H
#define NINJATRAP_H
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class NinjaTrap : virtual public ClapTrap
{
	public:	
		NinjaTrap(std::string name);
		~NinjaTrap();
		void ninjaShoeBox(ScavTrap &c) const;
		void ninjaShoeBox(ClapTrap &c) const;
		void ninjaShoeBox(FragTrap &c) const;
		void ninjaShoeBox(NinjaTrap &c) const;
};

#endif