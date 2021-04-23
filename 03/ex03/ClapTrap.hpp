/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:07:36 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:12:23 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>

class ClapTrap
{
	public:	
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &c);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap &f);
		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected :
		unsigned int _hp;
		unsigned int _max_hp;
		unsigned int _ep;
		unsigned int _max_ep;
		unsigned int _lvl;
		std::string _name;
		std::string _type;
		unsigned int _cqc_d;
		unsigned int _rng_d;
		unsigned int _armr;
};

#endif