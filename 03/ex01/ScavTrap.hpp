/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:02:11 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 12:51:38 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP
#define SCAVTRAP
#include "FragTrap.hpp"

class ScavTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &f);
		ScavTrap& operator=(const ScavTrap &f);
		~ScavTrap();
		
		
		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer() const;
	private :
		unsigned int _hp;
		unsigned int _max_hp;
		unsigned int _ep;
		unsigned int _max_ep;
		unsigned int _lvl;
		std::string _name;
		unsigned int _cqc_d;
		unsigned int _rng_d;
		unsigned int _armr;
};
#endif